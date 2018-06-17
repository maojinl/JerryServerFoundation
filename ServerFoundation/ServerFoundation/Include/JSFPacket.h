#pragma once
#include <vector>
#include "JSFTypeDefs.h"
using namespace std;

class JSFPacket
{
	vector<char> mBuffer;
public:
	JSFPacket() {}
	virtual ~JSFPacket() {}
	void FillPacket(char* pData, size_t len)
	{
		mBuffer.insert(mBuffer.end(), pData, pData + len);
	}
	vector<char>& GetPacketData() { return mBuffer; }
};