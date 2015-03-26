#include "DS/CLcreateIndexWorkItem.h"
#include "common/DevLog/DevLog.h"
#include "DS/DGroupKey.h"

extern DevLog * g_pDevLog;
extern CLDCConnectAgent * g_pDCConnectAgent;
CLcreateIndexWorkItem::CLcreateIndexWorkItem():m_data("")
{
}

CLcreateIndexWorkItem::~CLcreateIndexWorkItem()
{
}

int CLcreateIndexWorkItem::process()
{
	unsigned int dbID = m_impTaskAck.dbid();
	string tableName = m_impTaskAck.tablename();
	size_t columnCount = m_impTaskAck.colvalue_size();
	//ColumnTable * table = new ColumnTable(tableName);
	DRowTable * rtable = constructDRowTable(columnCount, tableName, 0);
	vector<string> columnNameVec;

	typedef map<string, vector<string> > StrMap;
	typedef map<string, vector<int> > IntMap;
	typedef map<string, vector<double> > NumMap;

	
	for(int i = 0; i < m_impTaskAck.colvalue_size(); ++i)
	{
		const COL_DATA & colData = m_impTaskAck.colvalue(i);
		string columnName = colData.colname();

		MSG_DS_CS_RAW_DATA_SEND rawDataSend;
		rawDataSend.set_taskid(getTaskID());
		rawDataSend.set_dbid(dbID);
		rawDataSend.set_tablename(tableName);
		rawDataSend.set_columnname(columnName);
		rawDataSend.set_sliceno(m_impTaskAck.subtaskno());
		rawDataSend.set_slicenum(m_impTaskAck.subtasknum());
		uint64_t itemCount = colData.colvalue_size();
		switch(colData.coltype())
		{
			case COL_DATA_COLUMN_TYPE_STRING:
			{
				rawDataSend.set_columntype(MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_STRING);
				
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
				DGroupKey<string> * column = constructDGroupKey(columnName, itemCount, 0, STRING_TYPE, strMultiMap);
				//table->insertOneDGroupKey((void *)column, columnName, STRING_TYPE);
				vector<uint64_t> columnCompVector = generateCompVector(column->getDictionary(),strVec);
				rtable->fillOneColumn(columnName, itemCount, columnCompVector);
				
				vector<string>& dicVec = column->getDictionaryVecRef();
				for(vector<string>::iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = rawDataSend.add_dicvalue();
					dicValue->set_strvalue(*it);
				}
				vector<uint64_t>& offsetVec = column->getOffsetRef();
				for(vector<uint64_t>::iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					rawDataSend.add_indexoffsets(*it);
				}
				vector<uint64_t>& postVec = column->getPostVecRef();
				for(vector<uint64_t>::iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					rawDataSend.add_indexposting(*it);
				}
				
				break;
			}
			case COL_DATA_COLUMN_TYPE_INT:
			{
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
				//table->insertOneDGroupKey((void *)column, columnName, INT_TYPE);
				vector<uint64_t> columnCompVector = generateCompVector(column->getDictionary(),iVec);
				rtable->fillOneColumn(columnName, itemCount, columnCompVector);
				
				vector<int>& dicVec = column->getDictionaryVecRef();
				for(vector<int>::iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = rawDataSend.add_dicvalue();
					dicValue->set_strvalue(*it);
				}
				vector<uint64_t>& offsetVec = column->getOffsetRef();
				for(vector<uint64_t>::iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					rawDataSend.add_indexoffsets(*it);
				}
				vector<uint64_t>& postVec = column->getPostVecRef();
				for(vector<uint64_t>::iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					rawDataSend.add_indexposting(*it);
				}
				break;
			}
			case COL_DATA_COLUMN_TYPE_FLOAT:
			{
				multimap<float , uint64_t> fMultiMap;
				vector<double> dVec;
				for(int j = 0; j < colData.colvalue_size(); j++)
				{
					const COL_VALUE & colValue = colData.colvalue(j);
					double dValue = colValue.fvalue();
					uint64_t rowNum = colValue.rowno();
					fMultiMap.insert(make_pair(dValue, rowNum));
					dVec.push_back(dValue);
				}

				DGroupKey<double> * column = constructDGroupKey(columnName, itemCount, 0, DOUBLE_TYPE, fMultiMap);
				//table->insertOneDGroupKey((void *)column, columnName, DOUBLE_TYPE);
				vector<uint64_t> columnCompVector = generateCompVector(column->getDictionary(), dVec);
				rtable->fillOneColumn(columnName, itemCount, columnCompVector);
				
				vector<double>& dicVec = column->getDictionaryVecRef();
				for(vector<double>::iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = rawDataSend.add_dicvalue();
					dicValue->set_strvalue(*it);
				}
				vector<uint64_t>& offsetVec = column->getOffsetRef();
				for(vector<uint64_t>::iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					rawDataSend.add_indexoffsets(*it);
				}
				vector<uint64_t>& postVec = column->getPostVecRef();
				for(vector<uint64_t>::iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					rawDataSend.add_indexposting(*it);
				}
				break;
			}
			case COL_DATA_COLUMN_TYPE_DOUBLE:
			{
				multimap<double, uint64_t> dMultiMap;
				vector<double> dVec;
				for(int j = 0; j < colData.colvalue_size(); j++)
				{
					const COL_VALUE & colValue = colData.colvalue(j);
					double dValue = colValue.fvalue();
					uint64_t rowNum = colValue.rowno();
					dMultiMap.insert(make_pair(dValue, rowNum));
				}

				DGroupKey<double> * column = constructDGroupKey(columnName, itemCount, 0, DOUBLE_TYPE, dMultiMap);
				//table->insertOneDGroupKey((void *)column, columnName, DOUBLE_TYPE);
				vector<uint64_t> columnCompVector = generateCompVector(column->getDictionary(), dVec);
				rtable->fillOneColumn(columnName, itemCount, columnCompVector);
				
				vector<double>& dicVec = column->getDictionaryVecRef();
				for(vector<double>::iterator it = dicVec.begin();
											it != dicVec.end();
											++it)
				{
					DICT_VALUE * dicValue = rawDataSend.add_dicvalue();
					dicValue->set_strvalue(*it);
				}
				vector<uint64_t>& offsetVec = column->getOffsetRef();
				for(vector<uint64_t>::iterator it = offsetVec.begin();
												it != offsetVec.end();
												++it)
				{
					rawDataSend.add_indexoffsets(*it);
				}
				vector<uint64_t>& postVec = column->getPostVecRef();
				for(vector<uint64_t>::iterator it = postVec.begin();
												it != postVec.end();
												++it)
				{
					rawDataSend.add_indexposting(*it);
				}
				break;
			}
			default:
			{
				DEV_LOG_ERROR("CLcreateIndexWorkItem::process type error!");
				break;
			}
		}

		// Send protobuf package to cs
		
	}

	
	//delete table;
	delete rtable;
	return SUCCESSFUL;
}
