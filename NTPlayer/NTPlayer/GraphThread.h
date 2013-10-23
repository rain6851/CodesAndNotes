#ifndef _NTPLAYER_GRAPHTHREAD_H_
#define _NTPLAYER_GRAPHTHREAD_H_

#include "PlayerCore.h"

class CGraphThread : public CAMThread
{
public:
    CGraphThread(CPlayerCore* player);
    ~CGraphThread();


    enum {GM_OPEN, GM_CLOSE, GM_EXIT};

    DWORD ThreadProc();

    void OpenMedia(CAutoPtr<OpenMediaData> pOMD);
    void CloseMedia();
    void Exit();

protected:
    void OnOpen();
    void OnClose();
    void OnExit();

private:
    
    void* m_param;


    CAMEvent m_evt;

    CPlayerCore* m_pPlayer;

    void* m_pParam;

    CCritSec m_csLock;

    CAutoPtr<OpenMediaData> m_pOMD;

};

#endif