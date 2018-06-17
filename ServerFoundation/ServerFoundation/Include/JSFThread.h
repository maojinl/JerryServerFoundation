#pragma once
#include "JSFTypeDefs.h"

#ifdef __LINUX__
typedef pthread_t JSFThreadHandle;
typedef void* JSFThread_CallBackResult;
#elif WIN32
#include <Windows.h>
typedef HANDLE JSFThreadHandle;
typedef ULong JSFThread_CallBackResult;
#endif

typedef JSFThread_CallBackResult(*JSFThreadDelegateFunc)(void* pThread);

class JSFThread
{
public:
	JSFThread(Sint32 createMode);
	JSFThread(Sint32 createMode, JSFThreadDelegateFunc delegateFunc, void* pData);
	virtual ~JSFThread();
	bool mTerminate;
	Sint32 mCreateMode;
	virtual Uint32 Run();
	void CloseThreadHandle();
	void ThreadBegin();
	JSFResult Release();
	void RequestQuit();
	void* GetDelegatedData();
	JSFThreadDelegateFunc mDelegateFunc;
	static JSFThread_CallBackResult CALLBACK JSFThreadCallBack(void* iData);
protected:
	bool mbQuitReq;
	JSFThreadHandle mhThread;
	ULong mThreadID; 
	void* mDelegatedData;
	bool IsContinue();
};