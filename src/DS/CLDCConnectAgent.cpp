#include "common/comm/Epoll.h"
#include "common/comm/SocketAddress.h"
#include "common/comm/AgentManager.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DC_DS_RA_INFO_SEND.pb.h"
#include "protocol/DIS/MSG_DC_DS_IMPORT_INFO_SEND.pb.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "DS/CLDCConnectAgent.h"
#include "DS/CLRAConnectAgent.h"
#include "DS/CLimpTaskManager.h"
#include <sstream>

extern DevLog * g_pDevLog;
CLDCConnectAgent::CLDCConnectAgent()
{
}

CLDCConnectAgent::CLDCConnectAgent(const SocketAddress &addr):TCPAgent(addr)
{
}

CLDCConnectAgent::CLDCConnectAgent(const TCPSocket &sock, const SocketAddress &addr):
	TCPAgent(sock, addr)
{
}

CLDCConnectAgent::~CLDCConnectAgent()
{
}

int CLDCConnectAgent::init()
{
	if(this->connect() != SUCCESSFUL)
	{
		DEV_LOG_ERROR("CLDCConnectAgent::init connect error!");
		return FAILED;
	}
	return SUCCESSFUL;
}

int CLDCConnectAgent::connectAfter(bool bConnect)
{
	if(bConnect)
	{
		
	}
	return SUCCESSFUL;
}

void CLDCConnectAgent::readBack(InReq & req)
{
	switch(req.m_msgHeader.cmd)
	{
		case DC_DS_RA_INFO_SEND:
		{
			string data(req.ioBuf, req.m_msgHeader.length);
			MSG_DC_DS_RA_INFO_SEND raInfo;
			if(!raInfo.ParseFromString(data))
			{
				DEV_LOG_ERROR("CLDCConnectAgent::readBack RA_INFO parse from string error!");
			}
			else
			{
				MSG_DS_DC_RA_INFO_SEND_ACK raInfoSendAck;
				string sendData;
				MsgHeader msgHeader;
				msgHeader.cmd = DS_DC_RA_INFO_SEND_ACK;
				int statusCode;
				for(int i = 0; i < raInfo.rainfo_size(); i++)//待修改，无法保证某个结点连接出错时返回错误信息
				{
					const MSG_DC_DS_RA_INFO_SEND_RA_INFO & raAddrInfo = raInfo.rainfo(i);
					SocketAddress raAddr;
					string raIP = raAddrInfo.raip();
					unsigned int raPort = raAddrInfo.raport();
					raAddr.setAddress(raIP.c_str(), (unsigned short)raPort);
					CLRAConnectAgent * pRAConnectAgent = 
						(AgentManager::getInstance())->createAgent<CLRAConnectAgent>(raAddr);
   					if(pRAConnectAgent->init() == FAILED)
   					{
   						string msg = "CLDCConnectAgent::readBack init CLRAConnectAgent error, " + raIP + ":" + intToStr((int)raPort);
						//ERROR_LOG("CLDCConnectAgent::readBack init CLRAConnectAgent error, %s:%d",raIP.c_str(), raPort);
						DEV_LOG_ERROR(msg);
						statusCode = -18;
					}
					else
					{
						stringstream ss;
						ss << raPort;
						string raPortStr;
						ss >> raPortStr;
						raIP += ":" + raPortStr;
						unsigned int agentID = pRAConnectAgent->getID();
						(CLimpTaskManager::getInstance())->setRAAgentID(raIP, agentID);	
						statusCode = 0;
					}
				}
				raInfoSendAck.set_statuscode(statusCode);
				raInfoSendAck.SerializeToString(&sendData);					
				msgHeader.length = sendData.length();
				sendPackage(msgHeader, sendData.c_str());
				sendData.clear();
			}
			break;
		}
		case DC_DS_IMPORT_INFO_SEND:
		{
			string data(req.ioBuf, req.m_msgHeader.length);
			MSG_DC_DS_IMPORT_INFO_SEND impInfo;
			if(!impInfo.ParseFromString(data))
			{
				DEV_LOG_ERROR("CLDCConnectAgent::readBack IMPORT parse from string error!");
			}
			else
			{
				CLimpTaskManager::getInstance()->setImpTaskID(impInfo.taskid(), getID());
				for(int i = 0; i < impInfo.tableinfo_size(); i++)
				{
					const MSG_DC_DS_IMPORT_INFO_SEND_TABLE_INFO & impInfoTableInfo = impInfo.tableinfo(i);
					MSG_DS_RA_IMPORT_TASK_SEND impTask;
					impTask.set_taskid(impInfo.taskid());
					IMP_DB_INFO * impDBInfo = impTask.add_dbinfo();
					impDBInfo->set_dbid(impInfoTableInfo.dbid());
					IMP_TAB_INFO * impTabInfo = impDBInfo->add_tableinfo();
					string tableName = impTabInfo->tablename();
					impTabInfo->set_tablename(tableName);

					for(int j = 0; j < impInfoTableInfo.colname_size(); j++)
					{
						impTabInfo->add_colname(impInfoTableInfo.colname(j));
					}

					string sendData;
					impTask.SerializeToString(&sendData);
					MsgHeader msgHeader;
					msgHeader.cmd = DS_RA_IMPORT_TASK_SEND;
					msgHeader.length = sendData.length();
					string raName = impInfoTableInfo.raname();
					unsigned int agentID = CLimpTaskManager::getInstance()->getRAAgentID(raName);
					CLRAConnectAgent * pRAConnAgent = 
						dynamic_cast<CLRAConnectAgent *>((AgentManager::getInstance())->get(agentID));

					if(pRAConnAgent == NULL)
					{
						string msg = "CLDCConnectAgent::readBack get RAAgent error, RA Name: " + raName;
						//ERROR_LOG("CLDCConnectAgent::readBack get RAAgent error, RA Name: %s", raName.c_str());
						DEV_LOG_ERROR(msg);
					}
					else
					{
						pRAConnAgent->sendPackage(msgHeader,sendData.c_str());
					}
				}

				MsgHeader msgheader;
				msgheader.cmd = DS_DC_IMPORT_INFO_SEND_ACK;
				MSG_DS_DC_IMPORT_INFO_SEND_ACK impInfoSendAck;
				impInfoSendAck.set_taskid(impInfo.taskid());
				impInfoSendAck.set_statuscode(0);
				impInfoSendAck.set_statusmsg("Import info received!");
				string sdData;
				impInfoSendAck.SerializeToString(&sdData);
				sendPackage(msgheader, sdData.c_str());
			}
			break;
		}
		case DC_DS_HEARTBEAT_SEND_ACK:
		{
			
			break;
		}
	}
}

int CLDCConnectAgent::sendPackage(MsgHeader &header, const char *dataStr)
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
        DEV_LOG_ERROR("\nIn CLDCConnectAgent:: sendPackage(): write data error!\n");
        return FAILED;
    }
    return SUCCESSFUL;
}


