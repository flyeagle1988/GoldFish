#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "common/comm/AgentManager.h"
#include "common/comm/TaskManager.h"
#include "DS/CLcreateUpdateWorkItem.h"
#include "DS/CLcreateUpdateTask.h"
#include "DS/DGroupKey.h"
#include "DS/DRowTable.h"
#include "DS/ColumnTable.h"
#include "DS/CLCSAddrManager.h"
#include "DS/CLCSConnectAgent.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_CS_RAW_DATA_SEND.pb.h"
#include "protocol/DIS/MSG_DS_CS_UPDATE_DATA_SEND.pb.h"
extern DevLog *g_pDevLog;

DRowTable* constructDRowTable(size_t attributeCount, string tableName, uint64_t base);
DGroupKey<string>* constructDGroupKey(string columnName, uint64_t itemCount, uint64_t base, uint64_t type, multimap<string, uint64_t> initMap);
DGroupKey<int>* constructDGroupKey(string columnName, uint64_t itemCount, uint64_t base, uint64_t type, multimap<int, uint64_t> initMap);
DGroupKey<double>* constructDGroupKey(string columnName, uint64_t itemCount, uint64_t base, uint64_t type, multimap<double, uint64_t> initMap);


CLcreateUpdateWorkItem::CLcreateUpdateWorkItem()
{
}
CLcreateUpdateWorkItem::~CLcreateUpdateWorkItem()
{
}
int CLcreateUpdateWorkItem::process()
{
	for(vector<COL_DATA>::iterator it = m_colDataVec.begin();
								it != m_colDataVec.end();
								++it)
	{
		MSG_DS_CS_UPDATE_DATA_SEND updateDataSend;		
		string columnName = it->colname();
		uint64_t itemCount = it->colvalue_size();
		
		updateDataSend.set_taskid(getTaskID());
		updateDataSend.set_dbid(m_dbID);
		updateDataSend.set_tablename(m_tableName);
		updateDataSend.set_columnname(columnName);
		updateDataSend.set_sliceno(m_sliceNo);
		updateDataSend.set_slicenum(m_sliceNum);
		
		CLcreateUpdateTask * pTask = 
			dynamic_cast<CLcreateUpdateTask *>(TaskManager::getInstance()->get(getTaskID()));
		switch(it->coltype())
		{
			case COL_DATA_COLUMN_TYPE_STRING:
			{
				multimap<string , uint64_t> strMultiMap;
				vector<string> strVec;
				for(int i = 0; i < it->colvalue_size(); i++)
				{
					const COL_VALUE & colValue = it->colvalue(i);
					string strData = colValue.strvalue();
					uint64_t rowNum = colValue.rowno();
					strMultiMap.insert(make_pair(strData, rowNum));
					strVec.push_back(strData);
				}
				pTask->setStringMap(columnName,strVec);
				DGroupKey<string> * column = constructDGroupKey(columnName, itemCount, 0, STRING_TYPE, strMultiMap);
				const vector<string>& dicVec = column->getDictionaryVecRef();
				updateDataSend.set_columntype(MSG_DS_CS_UPDATE_DATA_SEND_COL_TYPE_VARCHAR);
				for(vector<string>::const_iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = updateDataSend.add_dicvalue();
					dicValue->set_strvalue(*it);
				}
				const vector<uint64_t>& offsetVec = column->getOffsetRef();
				for(vector<uint64_t>::const_iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					updateDataSend.add_indexoffsets(*it);
				}
				const vector<uint64_t>& postVec = column->getPostVecRef();
				for(vector<uint64_t>::const_iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					updateDataSend.add_indexposting(*it);
				}
				break;
			}
			case COL_DATA_COLUMN_TYPE_INT:
			{
				updateDataSend.set_columntype(MSG_DS_CS_UPDATE_DATA_SEND_COL_TYPE_INTTYPE);
				multimap<int, uint64_t> iMultiMap;
				vector<int> iVec;
				for(int i = 0; i < it->colvalue_size(); i++)
				{
					const COL_VALUE & colValue = it->colvalue(i);
					int iData = colValue.ivalue();
					uint64_t rowNum = colValue.rowno();
					iMultiMap.insert(make_pair(iData,rowNum));
					iVec.push_back(iData);
				}
				pTask->setIntMap(columnName,iVec);
				DGroupKey<int> * column = constructDGroupKey(columnName, itemCount, 0, INT_TYPE, iMultiMap);
				
				const vector<int>& dicVec = column->getDictionaryVecRef();
				for(vector<int>::const_iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = updateDataSend.add_dicvalue();
					dicValue->set_dvalue(*it);
				}
				const vector<uint64_t>& offsetVec = column->getOffsetRef();
				for(vector<uint64_t>::const_iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					updateDataSend.add_indexoffsets(*it);
				}
				const vector<uint64_t>& postVec = column->getPostVecRef();
				for(vector<uint64_t>::const_iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					updateDataSend.add_indexposting(*it);
				}
												
				break;
			}
			case COL_DATA_COLUMN_TYPE_FLOAT:
			case COL_DATA_COLUMN_TYPE_DOUBLE:
			{
				updateDataSend.set_columntype(MSG_DS_CS_UPDATE_DATA_SEND_COL_TYPE_DOUBLETYPE);
				multimap<double, uint64_t> dMultiMap;
				vector<double> dVec;
				for(int i = 0; i < it->colvalue_size(); i++)
				{
					const COL_VALUE & colValue = it->colvalue(i);					
					double dData = colValue.ivalue();
					uint64_t rowNum = colValue.rowno();
					dMultiMap.insert(make_pair(dData,rowNum));
					dVec.push_back(dData);
				}
				pTask->setDoubleMap(columnName, dVec);
				DGroupKey<double> * column = constructDGroupKey(columnName, itemCount, 0, DOUBLE_TYPE, dMultiMap);
				const vector<double>& dicVec = column->getDictionaryVecRef();
				for(vector<double>::const_iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = updateDataSend.add_dicvalue();
					dicValue->set_dvalue(*it);
				}
				const vector<uint64_t>& offsetVec = column->getOffsetRef();				

				for(vector<uint64_t>::const_iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					updateDataSend.add_indexoffsets(*it);
				}
				const vector<uint64_t>& postVec = column->getPostVecRef();
				for(vector<uint64_t>::const_iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					updateDataSend.add_indexposting(*it);
				}
				break;
			}
			default:
			{
				DEV_LOG_ERROR("CLcreateUpdateWorkItem::process: unknown type");
				return FAILED;
			}
		}
		string updateStr;
		updateDataSend.SerializeToString(&updateStr);

		string columnLocation = intToStr(m_dbID) + m_tableName + columnName;
		
		uint32_t agentID = CLCSAddrManager::getInstance()->getCSAgentIDByColumn(columnLocation);
		if(agentID != 0)
		{
			CLCSConnectAgent * pAgent = 
				dynamic_cast<CLCSConnectAgent *>(AgentManager::getInstance()->get(agentID));
			MsgHeader msgHeader;
			msgHeader.cmd = DS_CS_UPDATE_DATA_SEND;
			msgHeader.length = updateStr.length();
			pAgent->sendPackage(msgHeader,updateStr.c_str());
		}
		else
		{
			CLcreateUpdateTask * pCreateUpdateTask = 
				dynamic_cast<CLcreateUpdateTask *>(TaskManager::getInstance()->get(getTaskID()));
			pCreateUpdateTask->setUpdateData(columnName,updateStr);
		}
	}

	return SUCCESSFUL;
}
