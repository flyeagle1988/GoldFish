#include "DS/CLCSConnectAgent.h"
#include "DS/CLcreateIndexTask.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_CS_RAW_DATA_SEND.pb.h"
#include "protocol/DIS/MSG_DS_CS_RTABLE_CREATE.pb.h"
#include "common/DevLog/DevLog.h"
#include "common/comm/TaskManager.h"

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
		MsgHeader msgHeader;
		msgHeader.cmd = DS_CS_RAW_DATA_SEND;
		msgHeader.length = m_sendData.length();
		sendPackage(msgHeader,m_sendData.c_str());
		clearSendData();
		return SUCCESSFUL;
	}
	else
	{
		return FAILED;
	}
}

void CLCSConnectAgent::readBack(InReq &req)
{
	switch(req.m_msgHeader.cmd)
	{
		case CS_DS_RAW_DATA_SEND_ACK:
		{
			string data(req.ioBuf, req.m_msgHeader.length);
			MSG_CS_DS_RAW_DATA_SEND_ACK rawDataAck;
			rawDataAck.ParseFromString(data);

			if(rawDataAck.statuscode() < 0)
			{
				DEV_LOG_ERROR("CLCSConnectAgent::readBack CS_DS_RAW_DATA_SEND_ACK error, " + intToStr(rawDataAck.statuscode()));
			}
			else
			{
				CLcreateIndexTask * pTask = 
					dynamic_cast<CLcreateIndexTask *>(TaskManager::getInstance()->get(rawDataAck.taskid()));
				if(pTask == NULL)
				{
					DEV_LOG_ERROR("CLCSConnectAgent::readBack CS_DS_RAW_DATA_SEND_ACK: not find task: " + intToStr(rawDataAck.taskid()));
				}
				else
				{
					pTask->removeDict(rawDataAck.columnname());
					pTask->setDictReceived();
					if((pTask->isDictReceived())&&(pTask->isRTableReceived()))
					{
						pTask->setState(FINISH);
						pTask->goNext();
					}
				}
			}
			break;
		}
		case CS_DS_RTABLE_CREATE_ACK:
		{
			string data(req.ioBuf, req.m_msgHeader.length);
			MSG_CS_DS_RTABLE_CREATE_ACK rTableCreateAck;
			rTableCreateAck.ParseFromString(data);
			if(rTableCreateAck.statuscode() < 0)
			{
				DEV_LOG_ERROR("CLCSConnectAgent::readBack CS_DS_RTABLE_CREATE_ACK error, " + intToStr(rTableCreateAck.statuscode()));
			}
			else
			{
				CLcreateIndexTask * pTask = 
					dynamic_cast<CLcreateIndexTask *>(TaskManager::getInstance()->get(rTableCreateAck.taskid()));
				if(pTask == NULL)
				{
					DEV_LOG_ERROR("CLCSConnectAgent::readBack CS_DS_RTABLE_CREATE_ACK: not find task: " + intToStr(rTableCreateAck.taskid()));
				}
				else
				{
					pTask->removeRTable();
					pTask->setRTableReceived();
					if((pTask->isDictReceived())&&(pTask->isRTableReceived()))
					{
						pTask->setState(FINISH);
						pTask->goNext();
					}
				}
			}
			break;
		}
		default:
		{
			DEV_LOG_ERROR("CLCSConnectAgent::readBack default: unknown state: " + intToStr(req.m_msgHeader.cmd));
			break;
		}
	}
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
