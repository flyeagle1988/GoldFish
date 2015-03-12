#include "RA/CLDCAgent.h"
#include "RA/CLimportTask.h"
#include "RA/CLgetMetaDataTask.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DC_RA_DATABASE_INFO_GET.pb.h"
#include "protocol/DIS/MSG_DC_RA_IMPORT_SIZE_INFO_GET.pb.h"

#include "common/comm/TaskManager.h"
#include "common/log/log.h"


CLDCAgent::CLDCAgent()
{
}

CLDCAgent::CLDCAgent(const SocketAddress &addr):TCPAgent(addr)
{
}

CLDCAgent::CLDCAgent(const TCPSocket &sock, const SocketAddress &addr):TCPAgent(sock, addr)
{
}

CLDCAgent::~CLDCAgent()
{
}

void CLDCAgent::readBack(InReq & req)
{
	switch(req.m_msgHeader.cmd)
	{
		case DC_RA_DATABASE_INFO_SEND:
		{
			CLgetMetaDataTask * pGetMetaTask = TaskManager::getInstance()->create<CLgetMetaDataTask>();

			pGetMetaTask->setAgentID(getID());
			pGetMetaTask->goNext();
			break;
		}
		case DC_RA_IMPORT_SIZE_INFO_GET:
		{
			MSG_DC_RA_IMPORT_SIZE_INFO_GET impSizeInfo;
			string data(req.ioBuf, req.m_msgHeader.length);
			if(!impSizeInfo.ParseFromString(data))
			{
				cerr << "CLDCAgent::readBack:parse Protobuf error!" << endl;
			}
			else
			{
				MsgHeader msgHeader;
				msgHeader.cmd = RA_DC_IMPORT_SIZE_INFO_GET_ACK;
				MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK impSizeInfoAck;
				unsigned int taskID = impSizeInfo.taskid();
				impSizeInfoAck.set_taskid(taskID);
				impSizeInfoAck.set_statusccode(0);
				string sendData;
				if(!impSizeInfoAck.SerializeToString(&sendData))
				{
					cerr << "CLDCAgent::readBack serialize to string error!" << endl;
				}
				else
				{
					msgHeader.length = sendData.length();
					sendPackage(msgHeader, sendData.c_str());
				}
			}
		}
	}
}


int CLDCAgent::sendPackage(MsgHeader &header, const char *str)
{
	unsigned int msgLength = header.length + sizeof(MsgHeader);
	char * sendBuf = new char[msgLength + 1];
	memset(sendBuf, 0, msgLength + 1);
	memcpy(sendBuf, &header, sizeof(MsgHeader));

	if(str != NULL)
	{
		memcpy(sendBuf + sizeof(MsgHeader), str, header.length);
	}

	if(this->writeToBuffer(sendBuf, msgLength) == FAILED)
	{
		ERROR_LOG("\nCLDCAgent::sendPackage(): write data error!\n");
		return FAILED;
	}
	return SUCCESSFUL;
}

