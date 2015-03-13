#include "DS/CLCSConnectAgent.h"
#include "common/DevLog/DevLog.h"

extern DevLog * g_pDevLog;
CLCSConnectAgent::CLCSConnectAgent()
{
}

CLCSConnectAgent::CLCSConnectAgent(const SocketAddress &addr):
				TCPAgent(addr)
{
}

CLCSConnectAgent::~CLCSConnectAgent()
{
}

int CLCSConnectAgent::init()
{
	if(this->connect() != SUCCESSFUL)
	{
		DEV_LOG_ERROR("CLCSConnectAgent::init connect error!");
		return FAILED;
	}
	return SUCCESSFUL;
}

int CLCSConnectAgent::connectAfter(bool bConnect)
{
	if(bConnect)
	{
	
		return SUCCESSFUL;
	}
	else
	{
		return FAILED;
	}
}

void CLCSConnectAgent::readBack(InReq &req)
{
}

int CLCSConnectAgent::sendPackage(MsgHeader &header, const char *dataStr)
{
    uint32_t msgLength = header.length + sizeof(MsgHeader);
    char *sendBuf = new char[msgLength + 1];
    memset(sendBuf, 0, msgLength + 1);
    memcpy(sendBuf, &header, sizeof(MsgHeader));
    if (dataStr != NULL)
    {
        memcpy(sendBuf + sizeof(MsgHeader), dataStr, header.length);
    }
    if (this->writeToBuffer(sendBuf, msgLength) == FAILED)
    {
        DEV_LOG_ERROR("\nIn CLCSConnectAgent:: sendPackage(): write data error!\n");
        return FAILED;
    }
    return SUCCESSFUL;
}