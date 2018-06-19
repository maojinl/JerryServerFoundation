#pragma once
#include <deque>
#include "JSFThread.h"
#include "JSFPacket.h"
#include "JSFTypeDefs.h"
#include "JSFThreadLock.h"

using namespace std;

class JSFServer;
class JSFClientProperty;

class JSFOnPacketThread : public JSFThread
{
	typedef JSFThread super;
	typedef deque<JSFPacket*> JSFPacketQueue;
public:
	JSFServer* mpServer;
	JSFPacketQueue mPacketQueue;
	void *m_pUser;
	JSFClientProperty* mpClientProp;
	size_t mQueueLimit;
	JSFThreadLock mPacketQueueMutex;
public:
	virtual bool IsEmpty() const;
	virtual void PostPacket(JSFPacket* pPacket);
public:
	virtual Uint32 Run();
public:
	JSFOnPacketThread(Sint32 createMode, JSFServer* pServer, size_t queLimit = 1024);
	virtual ~JSFOnPacketThread();
};
