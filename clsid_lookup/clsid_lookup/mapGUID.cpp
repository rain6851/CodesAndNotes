
#include "stdafx.h"
#include <algorithm>
#include <InitGuid.h>
#include <uuids.h>
#include <mmreg.h>
#include <ks.h>
#include <ksmedia.h>
#include <dxva.h>
#include "moreuuids.h"
#include "mapGUID.h"

mapGUID KnownGuid::m_mapGUID;

#define KNOWN(x)   \
    m_mapGUID.insert( mapGUID::value_type(x, _T(#x)) );
    


//////////////////////////////////////////////////////////////////////////
void KnownGuid::Load()
{
    KNOWN(CLSID_AsyncReader);
    KNOWN(GUID_NULL);

    // Media Types
    KNOWN(MEDIATYPE_AnalogAudio);
    KNOWN(MEDIATYPE_AnalogVideo);
    KNOWN(MEDIATYPE_Audio);
    KNOWN(MEDIATYPE_AUXLine21Data);
    KNOWN(MEDIATYPE_DTVCCData);
    KNOWN(MEDIATYPE_DVD_ENCRYPTED_PACK);
    KNOWN(MEDIATYPE_DVD_NAVIGATION);
    KNOWN(MEDIATYPE_File);
    KNOWN(MEDIATYPE_Interleaved);
    KNOWN(MEDIATYPE_LMRT);
    KNOWN(MEDIATYPE_Midi);
    KNOWN(MEDIATYPE_MPEG1SystemStream);
    KNOWN(MEDIATYPE_MPEG2_PACK);
    KNOWN(MEDIATYPE_MPEG2_PES);
    KNOWN(MEDIATYPE_MSTVCaption);
    KNOWN(MEDIATYPE_NULL);
    KNOWN(MEDIATYPE_ScriptCommand);
    KNOWN(MEDIATYPE_Stream);
    KNOWN(MEDIATYPE_Text);
    KNOWN(MEDIATYPE_Timecode);
    KNOWN(MEDIATYPE_URL_STREAM);
    KNOWN(MEDIATYPE_VBI);
    KNOWN(MEDIATYPE_Video);

    // SubTypes
    KNOWN(MEDIASUBTYPE_A2B10G10R10);
    KNOWN(MEDIASUBTYPE_A2R10G10B10);
    KNOWN(MEDIASUBTYPE_AI44);
    KNOWN(MEDIASUBTYPE_AIFF);
    KNOWN(MEDIASUBTYPE_AnalogVideo_NTSC_M);
    KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_B);
    KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_D);
    KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_G);
    KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_H);
    KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_I);
    KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_M);
    KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_N);
    KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_N_COMBO);
    KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_B);
    KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_D);
    KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_G);
    KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_H);
    KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_K);
    KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_K1);
    KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_L);
    KNOWN(MEDIASUBTYPE_ARGB1555);
    KNOWN(MEDIASUBTYPE_ARGB1555_D3D_DX7_RT);
    KNOWN(MEDIASUBTYPE_ARGB1555_D3D_DX9_RT);
    KNOWN(MEDIASUBTYPE_ARGB32);
    KNOWN(MEDIASUBTYPE_ARGB32_D3D_DX7_RT);
    KNOWN(MEDIASUBTYPE_ARGB32_D3D_DX9_RT);
    KNOWN(MEDIASUBTYPE_ARGB4444);
    KNOWN(MEDIASUBTYPE_ARGB4444_D3D_DX7_RT);
    KNOWN(MEDIASUBTYPE_ARGB4444_D3D_DX9_RT);
    KNOWN(MEDIASUBTYPE_Asf);
    KNOWN(MEDIASUBTYPE_AU);
    KNOWN(MEDIASUBTYPE_Avi);
    KNOWN(MEDIASUBTYPE_AYUV);
    KNOWN(MEDIASUBTYPE_CFCC);
    KNOWN(MEDIASUBTYPE_CLJR);
    KNOWN(MEDIASUBTYPE_CLPL);
    KNOWN(MEDIASUBTYPE_CPLA);
    KNOWN(MEDIASUBTYPE_DOLBY_AC3);
    KNOWN(MEDIASUBTYPE_DOLBY_AC3_SPDIF);
    KNOWN(MEDIASUBTYPE_DRM_Audio);
    KNOWN(MEDIASUBTYPE_DssAudio);
    KNOWN(MEDIASUBTYPE_DssVideo);
    KNOWN(MEDIASUBTYPE_DTS);
    KNOWN(MEDIASUBTYPE_DtvCcData);
    KNOWN(MEDIASUBTYPE_dv25);
    KNOWN(MEDIASUBTYPE_dv50);
    KNOWN(MEDIASUBTYPE_DVCS);
    KNOWN(MEDIASUBTYPE_DVD_LPCM_AUDIO);
    KNOWN(MEDIASUBTYPE_DVD_NAVIGATION_DSI);
    KNOWN(MEDIASUBTYPE_DVD_NAVIGATION_PCI);
    KNOWN(MEDIASUBTYPE_DVD_NAVIGATION_PROVIDER);
    KNOWN(MEDIASUBTYPE_DVD_SUBPICTURE);
    KNOWN(MEDIASUBTYPE_dvh1);
    KNOWN(MEDIASUBTYPE_dvhd);
    KNOWN(MEDIASUBTYPE_DVSD);
    KNOWN(MEDIASUBTYPE_dvsd);
    KNOWN(MEDIASUBTYPE_dvsl);
    KNOWN(MEDIASUBTYPE_H264);
    KNOWN(MEDIASUBTYPE_IA44);
    KNOWN(MEDIASUBTYPE_IEEE_FLOAT);
    KNOWN(MEDIASUBTYPE_IF09);
    KNOWN(MEDIASUBTYPE_IJPG);
    KNOWN(MEDIASUBTYPE_IMC1);
    KNOWN(MEDIASUBTYPE_IMC2);
    KNOWN(MEDIASUBTYPE_IMC3);
    KNOWN(MEDIASUBTYPE_IMC4);
    KNOWN(MEDIASUBTYPE_IYUV);
    KNOWN(MEDIASUBTYPE_Line21_BytePair);
    KNOWN(MEDIASUBTYPE_Line21_GOPPacket);
    KNOWN(MEDIASUBTYPE_Line21_VBIRawData);
    KNOWN(MEDIASUBTYPE_MDVF);
    KNOWN(MEDIASUBTYPE_MJPG);
    KNOWN(MEDIASUBTYPE_MPEG1Audio);
    KNOWN(MEDIASUBTYPE_MPEG1AudioPayload);
    KNOWN(MEDIASUBTYPE_MPEG1Packet);
    KNOWN(MEDIASUBTYPE_MPEG1Payload);
    KNOWN(MEDIASUBTYPE_MPEG1System);
    KNOWN(MEDIASUBTYPE_MPEG1Video);
    KNOWN(MEDIASUBTYPE_MPEG1VideoCD);
    KNOWN(MEDIASUBTYPE_MPEG2_AUDIO);
    KNOWN(MEDIASUBTYPE_MPEG2_PROGRAM);
    KNOWN(MEDIASUBTYPE_MPEG2_TRANSPORT);
    KNOWN(MEDIASUBTYPE_MPEG2_TRANSPORT_STRIDE);
    KNOWN(MEDIASUBTYPE_MPEG2_UDCR_TRANSPORT);
    KNOWN(MEDIASUBTYPE_MPEG2_VIDEO);
    KNOWN(MEDIASUBTYPE_MPEG2_WMDRM_TRANSPORT);
    KNOWN(MEDIASUBTYPE_None);
    KNOWN(MEDIASUBTYPE_NULL);
    KNOWN(MEDIASUBTYPE_NV12);
    KNOWN(MEDIASUBTYPE_NV24);
    KNOWN(MEDIASUBTYPE_Overlay);
    KNOWN(MEDIASUBTYPE_PCM);
    KNOWN(MEDIASUBTYPE_Plum);
    KNOWN(MEDIASUBTYPE_QTJpeg);
    KNOWN(MEDIASUBTYPE_QTMovie);
    KNOWN(MEDIASUBTYPE_QTRle);
    KNOWN(MEDIASUBTYPE_QTRpza);
    KNOWN(MEDIASUBTYPE_QTSmc);
    KNOWN(MEDIASUBTYPE_RAW_SPORT);
    KNOWN(MEDIASUBTYPE_RGB1);
    KNOWN(MEDIASUBTYPE_RGB24);
    KNOWN(MEDIASUBTYPE_RGB32);
    KNOWN(MEDIASUBTYPE_RGB4);
    KNOWN(MEDIASUBTYPE_RGB555);
    KNOWN(MEDIASUBTYPE_RGB565);
    KNOWN(MEDIASUBTYPE_RGB8);
    KNOWN(MEDIASUBTYPE_S340);
    KNOWN(MEDIASUBTYPE_S342);
    KNOWN(MEDIASUBTYPE_SDDS);
    KNOWN(MEDIASUBTYPE_SPDIF_TAG_241h);
    KNOWN(MEDIASUBTYPE_TELETEXT);
    KNOWN(MEDIASUBTYPE_TVMJ);
    KNOWN(MEDIASUBTYPE_UYVY);
    KNOWN(MEDIASUBTYPE_VPS);
    KNOWN(MEDIASUBTYPE_VPVBI);
    KNOWN(MEDIASUBTYPE_VPVideo);
    KNOWN(MEDIASUBTYPE_WAKE);
    KNOWN(MEDIASUBTYPE_WAVE);
    KNOWN(MEDIASUBTYPE_WSS);
    KNOWN(MEDIASUBTYPE_Y211);
    KNOWN(MEDIASUBTYPE_Y411);
    KNOWN(MEDIASUBTYPE_Y41P);
    KNOWN(MEDIASUBTYPE_YUY2);
    KNOWN(MEDIASUBTYPE_YUYV);
    KNOWN(MEDIASUBTYPE_YV12);
    KNOWN(MEDIASUBTYPE_YVU9);
    KNOWN(MEDIASUBTYPE_YVYU);
    KNOWN(MEDIASUBTYPE_I420);
    KNOWN(MEDIASUBTYPE_WMASPDIF);


    // Formats
    KNOWN(FORMAT_525WSS);
    KNOWN(FORMAT_AnalogVideo);
    KNOWN(FORMAT_DolbyAC3);
    KNOWN(FORMAT_DVD_LPCMAudio);
    KNOWN(FORMAT_DvInfo);
    KNOWN(FORMAT_MPEG2_VIDEO);
    KNOWN(FORMAT_MPEG2Audio);
    KNOWN(FORMAT_MPEG2Video);
    KNOWN(FORMAT_MPEGStreams);
    KNOWN(FORMAT_MPEGVideo);
    KNOWN(FORMAT_None);
    KNOWN(FORMAT_VideoInfo);
    KNOWN(FORMAT_VIDEOINFO2);
    KNOWN(FORMAT_VideoInfo2);
    KNOWN(FORMAT_WaveFormatEx);

    // Wave formats
    KNOWN(KSDATAFORMAT_SUBTYPE_PCM);
    KNOWN(KSDATAFORMAT_SUBTYPE_IEEE_FLOAT);
    KNOWN(KSDATAFORMAT_SUBTYPE_DRM);
    KNOWN(KSDATAFORMAT_SUBTYPE_ALAW);
    KNOWN(KSDATAFORMAT_SUBTYPE_MULAW);
    KNOWN(KSDATAFORMAT_SUBTYPE_ADPCM);

    KNOWN(DXVA_ModeMPEG2_A);
    KNOWN(DXVA_ModeMPEG2_B);
    KNOWN(DXVA_ModeMPEG2_C);
    KNOWN(DXVA_ModeMPEG2_D);

    KNOWN(DXVA_ModeH264_A);
    KNOWN(DXVA_ModeH264_B);
    KNOWN(DXVA_ModeH264_C);
    KNOWN(DXVA_ModeH264_D);
    KNOWN(DXVA_ModeH264_E);
    KNOWN(DXVA_ModeH264_F);

    // #include <moreuuids.h>
    KNOWN(MEDIATYPE_Subtitle);
    KNOWN(MEDIASUBTYPE_RealMedia);
    KNOWN(MEDIASUBTYPE_Matroska);
    KNOWN(MEDIASUBTYPE_MP4);
    KNOWN(MEDIASUBTYPE_FLV);
    KNOWN(MEDIASUBTYPE_MPEG2_PVA);
    KNOWN(MEDIASUBTYPE_Ogg);
    KNOWN(MEDIASUBTYPE_PMP);
    KNOWN(MEDIASUBTYPE_avc1);
    KNOWN(MEDIASUBTYPE_AVC1);
    KNOWN(MEDIASUBTYPE_h264);
    KNOWN(MEDIASUBTYPE_x264);
    KNOWN(MEDIASUBTYPE_X264);
    KNOWN(MEDIASUBTYPE_VSSH);
    KNOWN(MEDIASUBTYPE_H264_bis);
    KNOWN(MEDIASUBTYPE_ArcsoftH264);
    KNOWN(MEDIASUBTYPE_AAC);
    KNOWN(MEDIASUBTYPE_MP4A);
    KNOWN(MEDIASUBTYPE_mp4a);    
    KNOWN(MEDIASUBTYPE_DAVC);
    KNOWN(MEDIASUBTYPE_14_4);
    KNOWN(MEDIASUBTYPE_28_8);
    KNOWN(MEDIASUBTYPE_ATRC);
    KNOWN(MEDIASUBTYPE_COOK);
    KNOWN(MEDIASUBTYPE_DNET);
    KNOWN(MEDIASUBTYPE_SIPR);
    KNOWN(MEDIASUBTYPE_RAAC);
    KNOWN(MEDIASUBTYPE_RACP);
    KNOWN(MEDIASUBTYPE_RV20);
    KNOWN(MEDIASUBTYPE_RV30);
    KNOWN(MEDIASUBTYPE_RV40);
    KNOWN(MEDIASUBTYPE_RV41);

    KNOWN(MEDIASUBTYPE_WMA9_00);
    KNOWN(MEDIASUBTYPE_WMA9_01);
    KNOWN(MEDIASUBTYPE_WMA9_02);
    KNOWN(MEDIASUBTYPE_WMA9_03);

    KNOWN(MEDIASUBTYPE_WMV1);
    KNOWN(MEDIASUBTYPE_WMV2);
    KNOWN(MEDIASUBTYPE_WMV3);
    KNOWN(MEDIASUBTYPE_WMVA);
    KNOWN(MEDIASUBTYPE_WMVR);
    KNOWN(MEDIASUBTYPE_WMVP);
    KNOWN(MEDIASUBTYPE_wmvp);
    
    KNOWN(MEDIASUBTYPE_WVP2);
    KNOWN(MEDIASUBTYPE_wvp2);
    KNOWN(MEDIASUBTYPE_wmv1);
    KNOWN(MEDIASUBTYPE_wmv2);
    KNOWN(MEDIASUBTYPE_wmv3);

    KNOWN(MEDIASUBTYPE_VMnc);

    
    KNOWN(MEDIASUBTYPE_VP31);
    KNOWN(MEDIASUBTYPE_vp31);
    KNOWN(MEDIASUBTYPE_VP50);
    KNOWN(MEDIASUBTYPE_vp50);    
    KNOWN(MEDIASUBTYPE_VP60);
    KNOWN(MEDIASUBTYPE_vp60);
    KNOWN(MEDIASUBTYPE_VP61);
    KNOWN(MEDIASUBTYPE_vp61);
    KNOWN(MEDIASUBTYPE_VP62);
    KNOWN(MEDIASUBTYPE_vp62);
    KNOWN(MEDIASUBTYPE_VP6F);
    KNOWN(MEDIASUBTYPE_vp6f);
    KNOWN(MEDIASUBTYPE_VP70);
    KNOWN(MEDIASUBTYPE_VP71);
    KNOWN(MEDIASUBTYPE_VP80);
    

    KNOWN(MEDIASUBTYPE_WAVE_DOLBY_AC3);
    KNOWN(MEDIASUBTYPE_WAVE_DTS);
    KNOWN(MEDIASUBTYPE_WVC1);
    KNOWN(MEDIASUBTYPE_wvc1);
    
    KNOWN(MEDIASUBTYPE_CCV1);
    KNOWN(MEDIASUBTYPE_XVID);
    KNOWN(MEDIASUBTYPE_xvid);
    KNOWN(MEDIASUBTYPE_DIVX);
    KNOWN(MEDIASUBTYPE_divx);
    KNOWN(MEDIASUBTYPE_DX50);
    KNOWN(MEDIASUBTYPE_dx50);
    KNOWN(MEDIASUBTYPE_H263);
    KNOWN(MEDIASUBTYPE_h263);
    KNOWN(MEDIASUBTYPE_DIV3);
    KNOWN(MEDIASUBTYPE_div3);
    KNOWN(MEDIASUBTYPE_MP43);
    KNOWN(MEDIASUBTYPE_mp43);
    KNOWN(MEDIASUBTYPE_MP42);
    KNOWN(MEDIASUBTYPE_mp42);
    KNOWN(MEDIASUBTYPE_MP41);
    KNOWN(MEDIASUBTYPE_mp41);
    KNOWN(MEDIASUBTYPE_MP4V);
    KNOWN(MEDIASUBTYPE_mp4v);
    KNOWN(MEDIASUBTYPE_MP4S);
    KNOWN(MEDIASUBTYPE_mp4s);
    KNOWN(MEDIASUBTYPE_SEDG);
    KNOWN(MEDIASUBTYPE_sedg);

    KNOWN(MEDIASUBTYPE_FLV4);
    KNOWN(MEDIASUBTYPE_flv4);

    KNOWN(MEDIASUBTYPE_HFYU);
    KNOWN(MEDIASUBTYPE_hfyu);
    KNOWN(MEDIASUBTYPE_3IV2);
    KNOWN(MEDIASUBTYPE_3iv2);
    KNOWN(MEDIASUBTYPE_3IVX);
    KNOWN(MEDIASUBTYPE_3ivx);
    KNOWN(MEDIASUBTYPE_MPG2);
    KNOWN(MEDIASUBTYPE_mpg2);
    KNOWN(MEDIASUBTYPE_EM2V);
    KNOWN(MEDIASUBTYPE_em2v);
    KNOWN(MEDIASUBTYPE_MMES);
    KNOWN(MEDIASUBTYPE_mmes);
    KNOWN(MEDIASUBTYPE_TSCC);
    KNOWN(MEDIASUBTYPE_tscc);
    KNOWN(MEDIASUBTYPE_CRAM);
    KNOWN(MEDIASUBTYPE_cram);
    KNOWN(MEDIASUBTYPE_AVRN);
    KNOWN(MEDIASUBTYPE_avrn);
    KNOWN(MEDIASUBTYPE_FPS1);
    KNOWN(MEDIASUBTYPE_fps1);
    KNOWN(MEDIASUBTYPE_mjpg);
    KNOWN(MEDIASUBTYPE_MJPA);
    KNOWN(MEDIASUBTYPE_mjpa);
    KNOWN(MEDIASUBTYPE_AMVV);
    KNOWN(MEDIASUBTYPE_SP5X);
    KNOWN(MEDIASUBTYPE_DV25);
    KNOWN(MEDIASUBTYPE_DV50);
    KNOWN(MEDIASUBTYPE_CDVC);
    KNOWN(MEDIASUBTYPE_cdvc);
    KNOWN(MEDIASUBTYPE_CDV5);
    KNOWN(MEDIASUBTYPE_cdv5);
    KNOWN(MEDIASUBTYPE_DVIS);
    KNOWN(MEDIASUBTYPE_dvis);
    KNOWN(MEDIASUBTYPE_PDVC);
    KNOWN(MEDIASUBTYPE_pdvc);

    KNOWN(MEDIASUBTYPE_VYUY);
    KNOWN(MEDIASUBTYPE_MP3);
    KNOWN(MEDIASUBTYPE_AMR);
    KNOWN(MEDIASUBTYPE_SAMR);
    KNOWN(MEDIASUBTYPE_IMA4);
    KNOWN(MEDIASUBTYPE_IMA_AMV);
    KNOWN(MEDIASUBTYPE_FLAC);
    KNOWN(MEDIASUBTYPE_FLAC_FRAMED);
    KNOWN(MEDIASUBTYPE_TTA1);
    KNOWN(MEDIASUBTYPE_QDM2);
    KNOWN(MEDIASUBTYPE_qdm2);
    KNOWN(MEDIASUBTYPE_PCM_SOWT);
    KNOWN(MEDIASUBTYPE_PCM_sowt);
    KNOWN(MEDIASUBTYPE_PCM_TWOS);
    KNOWN(MEDIASUBTYPE_PCM_twos);
    KNOWN(MEDIASUBTYPE_PCM_IN32);
    KNOWN(MEDIASUBTYPE_PCM_in32);
    KNOWN(MEDIASUBTYPE_PCM_IN24);
    KNOWN(MEDIASUBTYPE_PCM_in24);
    KNOWN(MEDIASUBTYPE_PCM_FL32);
    KNOWN(MEDIASUBTYPE_PCM_fl32);
    KNOWN(MEDIASUBTYPE_PCM_FL64);
    KNOWN(MEDIASUBTYPE_PCM_fl64);
    KNOWN(MEDIASUBTYPE_PCM_RAW);
    

    KNOWN(MEDIASUBTYPE_ulaw);
    KNOWN(MEDIASUBTYPE_ULAW);
    KNOWN(MEDIASUBTYPE_MAC6);
    KNOWN(MEDIASUBTYPE_MAC3);

    KNOWN(MEDIASUBTYPE_NELLYMOSER);
    KNOWN(MEDIASUBTYPE_Vorbis);
    KNOWN(MEDIASUBTYPE_Vorbis2);
    KNOWN(MEDIASUBTYPE_X_Vorbis);


    KNOWN(MEDIASUBTYPE_HDMV_LPCM_AUDIO);
    KNOWN(KSDATAFORMAT_SUBTYPE_IEC61937_DOLBY_DIGITAL_PLUS);
    KNOWN(MEDIASUBTYPE_HaaliAVI);
    KNOWN(CLSID_QuickTimeRAWAudio);

    Dump();
}

void KnownGuid::Free()
{
    m_mapGUID.clear();
}

LPCTSTR KnownGuid::LookupGUID(const GUID& guid)
{
    LPCTSTR pName = NULL;
    mapGUID::const_iterator it = m_mapGUID.find(guid);
    if (it != m_mapGUID.end())
    {
        pName = it->second;
    }
    return pName;
}

const GUID* KnownGuid::LookupFriendlyName(LPCTSTR pFriendlyName)
{
    if (!pFriendlyName)
        return NULL;
    const GUID* pGUID = NULL;
    mapGUID::const_iterator it = std::find_if(m_mapGUID.begin(), m_mapGUID.end(), mapGUIDFinder(pFriendlyName));
    if (it != m_mapGUID.end())
    {
        pGUID = &(it->first);
    }
    return pGUID;
}

void KnownGuid::Dump()
{
    int i = 0;
    for (mapGUID::const_iterator it = m_mapGUID.begin(); it != m_mapGUID.end(); ++it, ++i)
    {
        //player_log(kLogLevelTrace, _T("[%3d] : %s - %s"), i, CStringFromGUID(it->first), CString(it->second));
    }
}