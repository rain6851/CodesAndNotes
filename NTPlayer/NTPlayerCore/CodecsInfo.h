#pragma once

#define MERIT64(merit)      (((UINT64)(merit)) << 16)
#define MERIT64_DO_NOT_USE  MERIT64(MERIT_DO_NOT_USE)
#define MERIT64_DO_USE      MERIT64(MERIT_DO_NOT_USE + 1)
#define MERIT64_UNLIKELY    (MERIT64(MERIT_UNLIKELY))
#define MERIT64_NORMAL      (MERIT64(MERIT_NORMAL))
#define MERIT64_PREFERRED   (MERIT64(MERIT_PREFERRED))
#define MERIT64_ABOVE_DSHOW (MERIT64(1) << 32)

enum CodecsCategory
{
    kCodecsCategoryUnknown = 0,
    kCodecsCategoryDSFilter,
    kCodecsCategoryDMO,
    kCodecsCategoryVFW,
};

enum CodecsType
{
    kCodecsTypeUnknown = 0,
    kCodecsTypeSourceFilter,
    kCodecsTypeSplitter,
    kCodecsTypeAudioDecoder,
    kCodecsTypeVideoDecoder,
    kCodecsTypeAudioEffect,
    kCodecsTypeVideoEffect,
    kCodecsTypeAudioRenderer,
    kCodecsTypeVideoRenderer,
    kCodecsTypeNullRenderer,
//     kCodecsTypeAudioEncoder,
//     kCodecsTypeVideoEncoder,
//     kCodecsTypeMuxer,
//     kCodecsTypeFileWriter,
};

enum CodecsPathFlag
{
    kCodecsPathFlagUnknown = 0,
    kCodecsPathFlagReg,
    kCodecsPathFlagFile,
    kCodecsPathFlagInner,
};

struct PathFlagItem
{
    CString flag;
    CString path;
};

 struct CheckByteItem
 {
     bool matched;
     CString checkbyte;
     GUID subtype;

     CheckByteItem()
     {
         matched = false;
         subtype = GUID_NULL;
     }
 };

// struct MediaTypeItem
// {
//     CString majortype;
//     CString subtype;
// };

struct MediaTypeItem
{
    MediaTypeItem() {
        majortype = GUID_NULL;
        subtype = GUID_NULL;
    }
    GUID majortype;
    GUID subtype;
};

struct CodecsInfo
{
    CString name;
    bool enable;
    bool preload;
    DWORD priority;
    CodecsPathFlag	pathflag;
    CString	path;
    CodecsCategory category;
    CString	catedata;
    CodecsType type;
    CLSID clsid;
    CAtlList<CString> protocols;
    CAtlList<CString> extensions;
    CAtlList<CString> depends;
    CAtlList<CString> preloads;
    CAtlList<CheckByteItem> checkbytes;
    CAtlList<MediaTypeItem> mediatypes;

    CodecsInfo()
    {
        enable = false;
        preload = false;
        priority = 0;
        //merit = MERIT64_DO_NOT_USE;
        clsid = GUID_NULL;
        category = kCodecsCategoryUnknown;
        type = kCodecsTypeUnknown;
    }

    ~CodecsInfo()
    {
        protocols.RemoveAll();
        extensions.RemoveAll();
        depends.RemoveAll();
        preloads.RemoveAll();
        checkbytes.RemoveAll();
        mediatypes.RemoveAll();
    }

    bool IsVideoType() {
        return 
            ( type == kCodecsTypeVideoDecoder   ||
            type == kCodecsTypeVideoEffect    ||
            type == kCodecsTypeVideoRenderer  );

    }

    bool IsAudioType() {
        return 
            ( type == kCodecsTypeAudioDecoder   ||
            type == kCodecsTypeAudioEffect    ||
            type == kCodecsTypeAudioRenderer  );
    }

    bool CheckTypes(const CAtlArray<GUID>& types, bool fExactMatch);
};


typedef CAtlList<CodecsInfo*>       CodecsInfoList;

//////////////////////////////////////////////////////////////////////////

enum {
    kCustomPriorityDefault = 0,
    kCustomPriorityExtension,
    kCustomPriorityStreamEnd,
    kCustomPriorityUserPreferred,
};

class CodecsListEx
{
    struct codecs_t {
        int index;
        CodecsInfo* info;
        int group;
        int exactmatch;
        int custom_priority;
    };

    static int codecs_cmp(const void* a, const void* b);
    CAtlList<codecs_t> m_codecs;
    CAtlList<CodecsInfo*> m_sortedcodecs;

public:
    CodecsListEx();
    ~CodecsListEx();

    bool IsEmpty() { return m_codecs.IsEmpty(); }
    void RemoveAll();
    bool Insert(CodecsInfo* info, int group, int exactmatch = 0, int custom_priority = 0);

    POSITION GetHeadPosition();
    CodecsInfo* GetNext(POSITION& pos);
};
