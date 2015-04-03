#include "common/DevLog/DevLog.h"
#include "common/comm/TaskManager.h"
#include "DS/CLDCConnectAgent.h"
#include "DS/DGroupKey.h"
#include "DS/CLcreateIndexWorkItem.h"
#include "DS/CLcreateIndexTask.h"
#include "DS/DRowTable.h"
#include "DS/ColumnTable.h"
#include "protocol/DIS/MSG_DS_CS_RAW_DATA_SEND.pb.h"
#include "protocol/DIS/MSG_DS_DC_RESOURCE_GET.pb.h"
#include "protocol/DIS/MSG_DS_CS_RTABLE_CREATE.pb.h"
#include "protocol/DIS/MSG_DS_DC_RTABLE_RESOURCE_GET.pb.h"
#include "protocol/protocol.h"


extern DevLog *g_pDevLog;
extern CLDCConnectAgent *g_pDCConnectAgent;
DRowTable* constructDRowTable(size_t attributeCount, string tableName, uint64_t base)
{
	return new DRowTable(attributeCount, tableName, base);
}

DGroupKey<string>* constructDGroupKey(string columnName, uint64_t itemCount, uint64_t base, uint64_t type, multimap<string, uint64_t> initMap)
{
	DGroupKey<string>* string_ptr = new DGroupKey<string>(columnName, itemCount, base, type);
	string_ptr->constructThreeVector(initMap);
	return string_ptr;
}

DGroupKey<int>* constructDGroupKey(string columnName, uint64_t itemCount, uint64_t base, uint64_t type, multimap<int, uint64_t> initMap)
{
	DGroupKey<int>* int_ptr = new DGroupKey<int>(columnName, itemCount, base, type);
	int_ptr->constructThreeVector(initMap);
	return int_ptr;
}

DGroupKey<double>* constructDGroupKey(string columnName, uint64_t itemCount, uint64_t base, uint64_t type, multimap<double, uint64_t> initMap)
{
	DGroupKey<double>* double_ptr = new DGroupKey<double>(columnName, itemCount, base, type);
	double_ptr->constructThreeVector(initMap);
	return double_ptr;
}

/*
template <class T>
vector<ROW_TABLE> generateCompVector(Dictionary<T>* dic, const vector<T>& initVector, const vector<uint64_t> &rowKeyVec)
{
	vector<ROW_TABLE> result;
	for(uint64_t i = 0; i < initVector.size(); i++)
	{
		ROW_TABLE rowTable;
		rowTable.rowKey = rowKeyVec[i];
		rowTable.entry = dic->getSurePos(initVector[i]);
		result.push_back(rowTable);
	}
	return result;
}
*/
template<class T>
vector<uint64_t> generateCompVector(Dictionary<T>* dic, const vector<T>& initVector)
{
	vector<uint64_t> result;
	
	for(uint64_t i = 0; i < initVector.size(); i++)
	{
		uint64_t entry = dic->getSurePos(initVector[i]);
		result.push_back(entry);
	}
	return result;
	
}
CLcreateIndexWorkItem::CLcreateIndexWorkItem()
{
}

CLcreateIndexWorkItem::~CLcreateIndexWorkItem()
{
}

int CLcreateIndexWorkItem::process()
{
	unsigned int dbID = m_impTaskAck.dbid();
	string tableName = m_impTaskAck.tablename();
	//向 DC 请求  CS 节点资源
	MSG_DS_DC_RESOURCE_GET resourceGet;
	resourceGet.set_taskid(getTaskID());
	resourceGet.set_dbid(dbID);
	resourceGet.set_tablename(tableName);
	//发送汇总的行压缩表
	MSG_DS_CS_RTABLE_CREATE rTableCreate;
	rTableCreate.set_taskid(getTaskID());
	rTableCreate.set_dbid(dbID);
	rTableCreate.set_tablename(tableName);
	rTableCreate.set_attributecount(m_impTaskAck.coldata_size());
	
	uint64_t rTableSize = 0;
	for(int i = 0; i < m_impTaskAck.coldata_size(); ++i)
	{
		const COL_DATA & colData = m_impTaskAck.coldata(i);
		string columnName = colData.colname();
		//发送给CS的数据
		MSG_DS_CS_RAW_DATA_SEND rawDataSend;
		rawDataSend.set_taskid(getTaskID());
		rawDataSend.set_dbid(dbID);
		rawDataSend.set_tablename(tableName);
		rawDataSend.set_columnname(columnName);
		rawDataSend.set_sliceno(m_impTaskAck.subtaskno());
		rawDataSend.set_slicenum(m_impTaskAck.subtasknum());
		//行压缩表中某一列的行压缩表
		MSG_DS_CS_RTABLE_CREATE_SINGLE_COLUMN_RTABLE *columnRTable = rTableCreate.add_columnrtables();
		columnRTable->set_columnname(columnName);

		uint64_t itemCount = colData.colvalue_size();
		vector<uint64_t> columnCompVector;
		uint64_t dictLength = 0;
		uint64_t offsetLength = 0;
		uint64_t postLength = 0;

		switch(colData.coltype())
		{
			case COL_DATA_COLUMN_TYPE_STRING:
			{
				rawDataSend.set_columntype(MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_VARCHAR);			
				multimap<string , uint64_t> strMultiMap;
				vector<string>	strVec;

				for(int j = 0; j < colData.colvalue_size(); j++)
				{
					const COL_VALUE & colValue = colData.colvalue(j);
					string strValue = colValue.strvalue();
					uint64_t rowNum = colValue.rowno();					
					strMultiMap.insert(make_pair(strValue, rowNum));
					strVec.push_back(strValue);
				}
				//建立字典
				DGroupKey<string> * column = constructDGroupKey(columnName, itemCount, 0, STRING_TYPE, strMultiMap);
				columnCompVector = generateCompVector(column->getDictionary(),strVec);
				
				const vector<string>& dicVec = column->getDictionaryVecRef();
				for(vector<string>::const_iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = rawDataSend.add_dicvalue();
					dicValue->set_strvalue(*it);
					dictLength += it->length();
				}
											
				const vector<uint64_t>& offsetVec = column->getOffsetRef();
				offsetLength = sizeof(uint64_t) * offsetVec.size();
				for(vector<uint64_t>::const_iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					rawDataSend.add_indexoffsets(*it);
				}
												
				const vector<uint64_t>& postVec = column->getPostVecRef();
				postLength = sizeof(uint64_t) * postVec.size();
				for(vector<uint64_t>::const_iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					rawDataSend.add_indexposting(*it);
				}
				
				break;
			}
			case COL_DATA_COLUMN_TYPE_INT:
			{
				rawDataSend.set_columntype(MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_INTTYPE);
				multimap<int , uint64_t> iMultiMap;
				vector<int> iVec;				
				for(int j = 0; j < colData.colvalue_size(); j++)
				{
					const COL_VALUE & colValue = colData.colvalue(j);
					int iValue = colValue.ivalue();
					uint64_t rowNum = colValue.rowno();
					iMultiMap.insert(make_pair(iValue, rowNum));
					iVec.push_back(iValue);
				}

				DGroupKey<int> * column = constructDGroupKey(columnName, itemCount, 0, INT_TYPE, iMultiMap);
				columnCompVector = generateCompVector(column->getDictionary(),iVec);
				
				const vector<int>& dicVec = column->getDictionaryVecRef();
				dictLength = sizeof(int) * dicVec.size();
				for(vector<int>::const_iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = rawDataSend.add_dicvalue();
					dicValue->set_ivalue(*it);
				}
				
				const vector<uint64_t>& offsetVec = column->getOffsetRef();
				offsetLength = sizeof(uint64_t) * offsetVec.size();
				for(vector<uint64_t>::const_iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					rawDataSend.add_indexoffsets(*it);
				}
				const vector<uint64_t>& postVec = column->getPostVecRef();
				postLength = sizeof(uint64_t) * postVec.size();
				for(vector<uint64_t>::const_iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					rawDataSend.add_indexposting(*it);
				}
				break;
			}
			case COL_DATA_COLUMN_TYPE_FLOAT:
			case COL_DATA_COLUMN_TYPE_DOUBLE:
			{
				rawDataSend.set_columntype(MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_DOUBLETYPE);
				multimap<double, uint64_t> dMultiMap;
				vector<double> dVec;
				for(int j = 0; j < colData.colvalue_size(); j++)
				{
					const COL_VALUE & colValue = colData.colvalue(j);
					double dValue = colValue.fvalue();
					uint64_t rowNum = colValue.rowno();
					dMultiMap.insert(make_pair(dValue, rowNum));
					dVec.push_back(dValue);
				}

				DGroupKey<double> * column = constructDGroupKey(columnName, itemCount, 0, DOUBLE_TYPE, dMultiMap);
				columnCompVector = generateCompVector(column->getDictionary(), dVec);
				
				const vector<double>& dicVec = column->getDictionaryVecRef();
				dictLength = sizeof(double) * dicVec.size();
				for(vector<double>::const_iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = rawDataSend.add_dicvalue();
					dicValue->set_dvalue(*it);
				}
				const vector<uint64_t>& offsetVec = column->getOffsetRef();
				for(vector<uint64_t>::const_iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					rawDataSend.add_indexoffsets(*it);
				}
				const vector<uint64_t>& postVec = column->getPostVecRef();
				for(vector<uint64_t>::const_iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					rawDataSend.add_indexposting(*it);
				}
												
				offsetLength = sizeof(uint64_t) * offsetVec.size();
				postLength = sizeof(uint64_t) * postVec.size();
				break;
			}
			default:
			{
				DEV_LOG_ERROR("CLcreateIndexWorkItem::process type error!");
				break;
			}
		}
		//计算行压缩表所占空间，生成行压缩表中一列的protobuf
		rTableSize += (columnCompVector.size() * sizeof(uint64_t)) / (1024 * 1024); 
		for(vector<uint64_t>::iterator it = columnCompVector.begin();
										it != columnCompVector.end();
										++it)
		{
			columnRTable->add_entrylist(*it);
		}
		//向DC发送字典数据大小								
		MSG_DS_DC_RESOURCE_GET_COL_SIZE *colSize = resourceGet.add_colsize();
		uint32_t columnSize = (dictLength + offsetLength + postLength) * m_impTaskAck.subtasknum() / (1024*1024);		
		colSize->set_columnname(columnName);
		colSize->set_columnsize(columnSize);

		string data;
		rawDataSend.SerializeToString(&data);
		CLcreateIndexTask * pTask = dynamic_cast<CLcreateIndexTask *>(TaskManager::getInstance()->get(getTaskID()));
		if(pTask != NULL)
		{	
			pTask->setDict(columnName, data);
		}
		else
		{
			DEV_LOG_ERROR("CLcreateIndexWorkItem::process get CLcreateIndexTask error: taskid " + getTaskID());
			return FAILED;
		}
		
	}
	string rTableData;
	rTableCreate.SerializeToString(&rTableData);
	CLcreateIndexTask * pTask = dynamic_cast<CLcreateIndexTask *>(TaskManager::getInstance()->get(getTaskID()));
	pTask->setRTable(rTableData);
	
	string outData;
	resourceGet.SerializeToString(&outData);
	MsgHeader msgHeader;
	msgHeader.cmd = DS_DC_RESOURCE_GET;
	msgHeader.length = outData.length();
	g_pDCConnectAgent->sendPackage(msgHeader,outData.c_str());

	string rTableResouceGetStr;
	MSG_DS_DC_RTABLE_RESOURCE_GET rTableResouceGet;
	rTableResouceGet.set_taskid(getTaskID());
	rTableResouceGet.set_dbid(dbID);
	rTableResouceGet.set_tablename(tableName);
	rTableResouceGet.set_rtablesize(rTableSize);
	rTableResouceGet.SerializeToString(&rTableResouceGetStr);
	msgHeader.cmd = DS_DC_RTABLE_RESOURCE_GET;
	msgHeader.length = rTableResouceGetStr.length();
	g_pDCConnectAgent->sendPackage(msgHeader,rTableResouceGetStr.c_str());
	
	return SUCCESSFUL;
}
