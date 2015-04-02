#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "common/comm/AgentManager.h"
#include "DS/CLcreateUpdateWorkItem.h"
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
template<class T>
vector<uint64_t> generateCompVector(Dictionary<T>* dic, const vector<T>& initVector);


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
		switch(it->coltype())
		{
			case COL_DATA_COLUMN_TYPE_STRING:
			{
				multimap<string , uint64_t> strMultiMap;
				for(int i = 0; i < it->colvalue_size(); i++)
				{
					const COL_VALUE & colValue = it->colvalue(i);
					string strData = colValue.strvalue();
					uint64_t rowNum = colValue.rowno();
					strMultiMap.insert(make_pair(strData, rowNum));
				}
				DGroupKey<string> * column = constructDGroupKey(columnName, itemCount, 0, STRING_TYPE, strMultiMap);
				const vector<string>& dicVec = column->getDictionaryVecRef();
				updateDataSend.set_columntype(MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_VARCHAR);
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
				updateDataSend.set_columntype(MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_INTTYPE);
				multimap<int, uint64_t> iMultiMap;
				for(int i = 0; i < it->colvalue_size(); i++)
				{
					const COL_VALUE & colValue = it->colvalue(i);
					int iData = colValue.ivalue();
					uint64_t rowNum = colValue.rowno();
					iMultiMap.insert(make_pair(iData,rowNum));
				}
				
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
				multimap<double, uint64_t> dMultiMap;
				for(int i = 0; i < it->colvalue_size(); i++)
				{
					const COL_VALUE & colValue = it->colvalue(i);					
					double dData = colValue.ivalue();
					uint64_t rowNum = colValue.rowno();
					dMultiMap.insert(make_pair(dData,rowNum));
				}
				
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
	}
	return SUCCESSFUL;
}
