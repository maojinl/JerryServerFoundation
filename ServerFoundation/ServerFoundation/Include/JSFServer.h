#pragma once
#include <set>
#include <vector>
#include "JSFTypeDefs.h"
#include "JSFServerSocketsMgr.h"

class JSFOnPacketThread;
class JSFPacket;

class JSFServer
{
	typedef std::vector<JSFOnPacketThread*> JSFOnPacketThreadVector;
private:
	JSFServerSocketsMgr *pSocketsMgr;
	JSFThreadLock mMutexClientsList;
	JSFThreadLock mMutexPostPacket;
	std::set<JSFClientProperty*> mClientProps;
	JSFOnPacketThreadVector mOnPacketThreadsList;
	Sint32 mAcceptNum;
	Sint32 mConnectNum;
	Sint32 mOnPacketThreadNum;
	Sint32 mTimeout;
	Sint32 mIdleCutTimeout;
public:
	JSFServer();
	virtual ~JSFServer();
	JSFResult CallBackSocketEvent(JSFClientProperty* cProp, JSFSocketEventMsg msg, JSFSocketRingBuffer* pRingBuffer);
	JSFResult CallBackAcceptEvent(JSFSocketAcceptMsg msg, Sint32 socketID, JSFSocketWrapper* pSocketWrapper);
	bool Run(Sint32 acceptNum, Sint32 connectNum, Sint32 threadNum, Sint32 idleTimeOut);
protected:
	JSFResult OnMsgAccept(Sint32 SockHandle, JSFSocketWrapper* pSocketWrapper);
	JSFClientProperty* InitClientProperty(Sint32 socketID, JSFSocketWrapper* pSocketWrapper);
	virtual JSFResult OnSockMsgRead(JSFClientProperty* cProp, JSFSocketEventMsg Msg, JSFSocketRingBuffer* pRingBuffer);
	bool PostPacket(JSFPacket* pPacket);
	bool Flush();
	bool Polling();
};