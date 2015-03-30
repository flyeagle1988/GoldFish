#include "DS/CLRAConnectAgent.h"
#include "DS/CLDCConnectAgent.h"
#include "DS/CLcreateIndexTask.h"
#include "common/comm/Epoll.h"
#include "common/comm/SocketAddress.h"
#include "common/comm/AgentManager.h"
#include "common/comm/TaskManager.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/DIS/MSG_DC_DS_IMPORT_INFO_SEND.pb.h"
#include "DS/CLimpTaskManager.h"
#include <iostream>

using namespace std;
extern DevLog *g_pDevLog;
extern CLDCConnectAgent * g_pDCConnectAgent;
CLRAConnectAgent::CLRAConnectAgent()
{
}

CLRAConnectAgent::CLRAConnectAgent(const SocketAddress &addr):
	TCPAgent(addr)
{
}

CLRAConnectAgent::CLRAConnectAgent(const TCPSocket &sock, const SocketAddress &addr):
	TCPAgent(sock, addr)
{
}

CLRAConnectAgent::~CLRAConnectAgent()
{
}

int CLRAConnectAgent::init()
{
	if(this->connect() != SUCCESSFUL)
	{
		DEV_LOG_ERROR("CLRAConnectAgent::init connect error!");
		return FAILED;
	}
	return SUCCESSFUL;
}

int CLRAConnectAgent::connectAfter(bool bConnect)
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

void CLRAConnectAgent::readBack(InReq &req)
{
	switch(req.m_msgHeader.cmd)
	{
		case RA_DS_IMPORT_ERROR_INFO_ACK:
		{
			string data(req.ioBuf, req.m_msgHeader.length);
			MSG_RA_DS_IMPORT_ERROR_INFO_ACK impErrInfoAck;
			if(!impErrInfoAck.ParseFromString(data))
			{
				DEV_LOG_ERROR("CLRAConnectAgent::readBack import error parse from string error!");
			}
			else
			{
				MSG_DS_DC_IMPORT_INFO_SEND_ACK impInfoAck;
				impInfoAck.set_taskid(impErrInfoAck.taskid());
				impInfoAck.set_statuscode(impErrInfoAck.statuscode());
				string statusMsg = impErrInfoAck.statusmsg();
				impInfoAck.set_statusmsg(statusMsg);

				string sendData;
				if(!impInfoAck.SerializeToString(&sendData))
				{
					DEV_LOG_ERROR("CLRAConnectAgent::readBack import error serialize to proto error!");
				}
				else
				{
					MsgHeader msgHeader;
					msgHeader.cmd = DS_DC_IMPORT_INFO_SEND_ACK;
					msgHeader.length = sendData.length();

					g_pDCConnectAgent->sendPackage(msgHeader, sendData.c_str());
				}

			}
			break;
		}
		case RA_DS_IMPORT_TASK_ACK:
		{
			string data(req.ioBuf, req.m_msgHeader.length);
			if(req.m_msgHeader.para1 == 0)
			{
				CLcreateIndexTask *pCreateIndexTask = TaskManager::getInstance()->create<CLcreateIndexTask>();
				pCreateIndexTask->setAgentID(getID());
				pCreateIndexTask->setData(data);
				pCreateIndexTask->goNext();
			}
			else
			{

			}

		}
		
	}
}

int CLRAConnectAgent::sendPackage(MsgHeader &header, const char *dataStr)
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
        DEBUG_LOG("\nIn CLRAConnectAgent:: sendPackage(): write data error!\n");
        return FAILED;
    }

    return SUCCESSFUL;
}
