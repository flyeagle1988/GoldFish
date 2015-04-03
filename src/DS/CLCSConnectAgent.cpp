#include "DS/CLCSConnectAgent.h"
#include "DS/CLcreateIndexTask.h"
#include "DS/CLcreateUpdateTask.h"
#include "DS/CLCSAddrManager.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_CS_RAW_DATA_SEND.pb.h"
#include "protocol/DIS/MSG_DS_CS_RTABLE_CREATE.pb.h"
#include "protocol/DIS/MSG_DS_CS_UPDATE_DATA_SEND.pb.h"
#include "protocol/DIS/MSG_DS_CS_RTABLE_SEND.pb.h"
#include "common/DevLog/DevLog.h"
#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"

extern DevLog * g_pDevLog;
template<class T>
vector<uint64_t> generateAppendVector(vector<T> dicVec, const vector<T>& initVector)
{
	vector<uint64_t> result;
	for(uint64_t i = 0; i < initVector.size(); i++)
	{
		typename vector<T>::iterator it = find(dicVec.begin(), dicVec.end(), initVector[i]);
		uint64_t entry = distance(dicVec.begin(), it);
		result.push_back(entry);
	}
	return result;
}


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
		case CS_DS_UPDATE_DATA_SEND_ACK:
		{
			string data(req.ioBuf, req.m_msgHeader.length);
			MSG_CS_DS_UPDATE_DATA_SEND_ACK updateDataAck;
			updateDataAck.ParseFromString(data);
			data.clear();
			if(updateDataAck.statuscode() < 0)
			{
				DEV_LOG_ERROR("CLCSConnectAgent::readBack CS_DS_UPDATE_DATA_SEND_ACK status error, " + intToStr(updateDataAck.statuscode()));
			}
			else
			{
				MSG_DS_CS_RTABLE_SEND rTableSend;
				rTableSend.set_taskid(updateDataAck.taskid());
				rTableSend.set_dbid(updateDataAck.dbid());
				rTableSend.set_tablename(updateDataAck.tablename());
				rTableSend.set_columnname(updateDataAck.columnname());
				for(int i = 0; i < updateDataAck.xvector_size(); i++)
				{
					rTableSend.add_xvector(updateDataAck.xvector(i));
				}
				vector<uint64_t> appendRTableVec;
				CLcreateUpdateTask * pCreateUpdateTask = 
					dynamic_cast<CLcreateUpdateTask *>(TaskManager::getInstance()->get(updateDataAck.taskid()));
				switch(updateDataAck.columntype())
				{
					case MSG_CS_DS_UPDATE_DATA_SEND_ACK_COL_TYPE_VARCHAR:
					{
						vector<string> strDicVec;
						for(int i = 0; i < updateDataAck.dicvalue_size(); i++)
						{
							const DICT_VALUE & dictValue = updateDataAck.dicvalue(i);
							strDicVec.push_back(dictValue.strvalue());
							
						}
						const vector<string>& initDataVec = pCreateUpdateTask->getStringVec(updateDataAck.columnname());
						appendRTableVec = generateAppendVector(strDicVec,initDataVec);
						pCreateUpdateTask->removeStringMap(updateDataAck.columnname());
						break;
					}
					case MSG_CS_DS_UPDATE_DATA_SEND_ACK_COL_TYPE_INTTYPE:
					{
						vector<int> iDicVec;
						for(int i = 0; i < updateDataAck.dicvalue_size(); i++)
						{
							const DICT_VALUE & dictValue = updateDataAck.dicvalue(i);
							iDicVec.push_back(dictValue.ivalue());
						}
						const vector<int>& initDataVec = pCreateUpdateTask->getIntVec(updateDataAck.columnname());
						appendRTableVec = generateAppendVector(iDicVec, initDataVec);
						pCreateUpdateTask->removeIntMap(updateDataAck.columnname());
						break;
					}
					case MSG_CS_DS_UPDATE_DATA_SEND_ACK_COL_TYPE_DOUBLETYPE:
					{
						vector<double> dDicVec;
						for(int i = 0; i < updateDataAck.dicvalue_size(); i++)
						{
							const DICT_VALUE & dictValue = updateDataAck.dicvalue(i);
							dDicVec.push_back(dictValue.dvalue());
						}
						const vector<double>& initDataVec = pCreateUpdateTask->getDoubleVec(updateDataAck.columnname());
						appendRTableVec = generateAppendVector(dDicVec, initDataVec);
						pCreateUpdateTask->removeDoubleMap(updateDataAck.columnname());
						break;
					}
					case MSG_CS_DS_UPDATE_DATA_SEND_ACK_COL_TYPE_TEXT:
					case MSG_CS_DS_UPDATE_DATA_SEND_ACK_COL_TYPE_TIMESTAMP:
					case MSG_CS_DS_UPDATE_DATA_SEND_ACK_COL_TYPE_BLOB:
						break;
					default:
					{
						DEV_LOG_ERROR("CLCSConnectAgent::readBack CS_DS_UPDATE_DATA_SEND_ACK unknown type!");
						break;
					}
				}
				for(vector<uint64_t>::iterator it = appendRTableVec.begin();
											it != appendRTableVec.end();
											++it)
				{
					ROWKEY_ENTRY *rowKeyEntry = rTableSend.add_rowtable();
					rowKeyEntry->set_entry(*it);
				}
				//string columnLocation = intToStr(updateDataAck.dbid()) + updateDataAck.tablename() + updateDataAck.columnname();
				string rTableIP = pCreateUpdateTask->getRTableIP();
				if(rTableIP != "")
				{
					uint32_t agentID = CLCSAddrManager::getInstance()->getCSAgent(rTableIP);
					CLCSConnectAgent * pAgent = dynamic_cast<CLCSConnectAgent *>(AgentManager::getInstance()->get(agentID));
					if(pAgent != NULL)
					{
						string rTableSendStr;
						rTableSend.SerializeToString(&rTableSendStr);
						MsgHeader msgHeader;
						msgHeader.cmd = DS_CS_RTABLE_SEND;
						msgHeader.length = rTableSendStr.length();
						pAgent->sendPackage(msgHeader,rTableSendStr.c_str());
						rTableSendStr.clear();
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
