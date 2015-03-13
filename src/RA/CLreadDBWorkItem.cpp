#include "RA/CLreadDBWorkItem.h"
#include "RA/CLDSAgent.h"
#include "common/comm/Error.h"
#include "common/log/log.h"
#include "common/comm/AgentManager.h"
#include "common/DevLog/DevLog.h"
#include "RA/CLDBManager.h"
#include <sys/sysinfo.h> 
#include <algorithm>
#include <iostream>
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/protocol.h"
using namespace std;

const unsigned int PREFETCH = 5000;
extern DevLog *g_pDevLog;

CLreadDBWorkItem::CLreadDBWorkItem()
{
}
CLreadDBWorkItem::~CLreadDBWorkItem()
{
	
}
int CLreadDBWorkItem::process()
	{
		string sql = "select rownum, ";
		for(vector<string>::iterator it = m_impTask.colName.begin();
							it != m_impTask.colName.end();
							++it)
		{
			sql += *it;
			if(it != m_impTask.colName.end() - 1)
			{
				sql += ", ";
			}
			else
			{
				sql += " ";
			}
		}
		sql += "from " + m_impTask.tableName;
	
		cout << sql.c_str() << endl;
	
		unsigned long tableSize = 0;
		unsigned long rowNum = 0;		//total number of the table
		unsigned int rowNumPerSend = 0;
		unsigned int numOfPack = 0; 	//total number send package 
		unsigned int noOfPack = 0;		//number of send package
		CLDBManager::getInstance()->getTableSize(m_impTask.dbID, m_impTask.tableName, tableSize, rowNum);
	
		rowNumPerSend = (rowNum > 500000) ? 500000:rowNum;
		numOfPack = ((rowNum % rowNumPerSend) == 0) ? (rowNum / rowNumPerSend) : (rowNum / rowNumPerSend + 1);
		
		Connection * conn = NULL;
		Statement * stmt = NULL;
		ResultSet * rs = NULL;
		vector<int> colType;
		DB_INFO dbInfo = CLDBManager::getInstance()->getDBInfo(m_impTask.dbID);
		ConnectionPool * connPool = NULL;
	
		try
		{
			connPool =CLDBManager::getInstance()->getConnPool(dbInfo.dbID);
			if(connPool == NULL)
			{
				DEV_LOG_ERROR("CLreadDBWorkItem::process getConnPool error!");
				return FAILED;
			}
			conn = connPool->createConnection(dbInfo.dbName, dbInfo.dbPasswd);
			if(conn == NULL)
			{
				DEV_LOG_ERROR("CLreadDBWorkItem::process get Connection error!");
				return FAILED;
			}
			MetaData custtab_metaData = conn->getMetaData(m_impTask.tableName, MetaData::PTYPE_TABLE);
			vector <MetaData> listOfColumns = custtab_metaData.getVector(MetaData::ATTR_LIST_COLUMNS);
	
			for(vector<MetaData>::iterator it = listOfColumns.begin();
							it != listOfColumns.end();
							++it)
			{
				MetaData columnObj = *it;
				string columnName = columnObj.getString(MetaData::ATTR_NAME);
				vector<string>::iterator pos = find(m_impTask.colName.begin()
													, m_impTask.colName.end()
													, columnName);
				if(pos != m_impTask.colName.end())
				{
					colType.push_back(columnObj.getInt(MetaData::ATTR_DATA_TYPE));
				}
			}
			stmt = conn->createStatement(sql);
			if(stmt)
			{
				stmt->setPrefetchRowCount(PREFETCH);
				rs = stmt->executeQuery();
			}
	
	
			typedef map<string, vector<string> > StrMap;
			typedef map<string, vector<double> > NumMap;
			typedef map<string, vector<int> > IntMap;
			typedef map<string, vector<float> > FloatMap;
	
			StrMap strMap;
			NumMap numMap;
			IntMap iMap;
			FloatMap fMap;
			vector<unsigned int> numOfRow;
			if(rs)
			{
				unsigned int k = 0;
				while(rs->next())
				{	
					int j = 1;
	
					unsigned int rowNo = rs->getInt(j);
					numOfRow.push_back(rowNo);
					++j;
	
					for(vector<int>::iterator i = colType.begin();
											i != colType.end();
											++i)
					{
						string colName = m_impTask.colName[j-2];
						switch(*i)
						{
							case OCCI_SQLT_DATE:
							case OCCI_SQLT_DAT:
							{
								string date = rs->getDate(j).toText("YYYY-MM-DD HH24:MI:SS");
								strMap[colName].push_back(date);
								break;
							}						
							case OCCI_SQLT_TIMESTAMP:
							case OCCI_SQLT_TIMESTAMP_TZ:
							{
								string timeStamp = rs->getTimestamp(j).toText("YYYY-MM-DD HH24:MI:SS [tzh:tzm]", 0);
								strMap[colName].push_back(timeStamp);
								break;
							}
							case OCCI_SQLT_STR:
							case OCCI_SQLT_VCS:
							case OCCI_SQLT_CHR:
							{
								string sData = rs->getString(j);
								strMap[colName].push_back(sData);
								break;
							}
							case OCCIINT:
							{
								int iData = rs->getInt(j);
								iMap[colName].push_back(iData);
								break;
							}
							case OCCIFLOAT:
							{
								float fData = rs->getFloat(j);
								fMap[colName].push_back(fData);
								break;
							}
							case OCCI_SQLT_NUM:
							{
								double nData = rs->getDouble(j);
								numMap[colName].push_back(nData);
								break;
							}
							/*
							case OCCI_SQLT_BLOB:
							{
								Blob tmpBlob(conn);
								tmpBlob = rs->getBlob(j);
								tmpBlob.open(OCCI_LOB_READWRITE);  
								int blobLen = tmpBlob.length();
								unsigned char * blobBuffer = new unsigned char[blobLen];
								tmpBlob.read(blobLen, blobBuffer, blobLen, 1);
								string strBlob((char *)(blobBuffer));
								strMap[colName].push_back(strBlob);
								break;
							}
							*/
						}
						j++;
					}
					k++;
	
					if(k == rowNumPerSend)
					{	
						MSG_RA_DS_IMPORT_TASK_ACK raImpTaskAck;
						raImpTaskAck.set_taskid(m_impTask.taskid);
						raImpTaskAck.set_dbid(m_impTask.dbID);
						raImpTaskAck.set_tablename(m_impTask.tableName);
						raImpTaskAck.set_subtasknum(numOfPack);
						raImpTaskAck.set_subtaskno(noOfPack);
	
						if(!strMap.empty()) 
						{
							for(StrMap::iterator it = strMap.begin();
											it != strMap.end();
											++it)
							{
								COL_DATA * colData = raImpTaskAck.add_colvalue();
								colData->set_colname(it->first);
								
								colData->set_coltype(COL_DATA_COLUMN_TYPE_STRING);
								int n = 0;
	
								for(vector<string>::iterator iter = it->second.begin();
													iter != it->second.end();
													++iter)
								{
									COL_VALUE * colValue = colData->add_colvalue();
									colValue->set_strvalue(*iter);
									colValue->set_rowno(numOfRow[n]);
									
									n++;
								}
								vector<string> iVtTemp;
								iVtTemp.swap(it->second);
							}
							
						}
						if(!numMap.empty())
						{
							for(NumMap::iterator it = numMap.begin();
											it != numMap.end();
											++it)
							{
								COL_DATA * colData = raImpTaskAck.add_colvalue();
								colData->set_colname(it->first);
								colData->set_coltype(COL_DATA_COLUMN_TYPE_NUM);
	
								int n = 0;
								for(vector<double>::iterator iter = it->second.begin();
													iter != it->second.end();
													++iter)
								{
									COL_VALUE * colValue = colData->add_colvalue();
									colValue->set_dvalue(*iter);
									colValue->set_rowno(numOfRow[n]);
									
									n++;
								}
								vector<double> dVtTemp;
								dVtTemp.swap(it->second);
							}
							
						}
						if(!iMap.empty())
						{
							for(IntMap::iterator it = iMap.begin();
												it != iMap.end();
												++it)
							{
								COL_DATA * colData = raImpTaskAck.add_colvalue();
								colData->set_colname(it->first);
								colData->set_coltype(COL_DATA_COLUMN_TYPE_NUM);
								int n = 0;
								for(vector<int>::iterator iter = it->second.begin();
												iter != it->second.end();
												++iter)
								{
									COL_VALUE * colValue = colData->add_colvalue();
									colValue->set_ivalue(*iter);
									colValue->set_rowno(numOfRow[n]);
									n++;
								}
								vector<int> iVtTemp;
								iVtTemp.swap(it->second);
							}
						}
						if(!fMap.empty())
						{
							for(FloatMap::iterator it = fMap.begin();
												it != fMap.end();
												++it)
							{
								COL_DATA * colData = raImpTaskAck.add_colvalue();
								colData->set_colname(it->first);
								colData->set_coltype(COL_DATA_COLUMN_TYPE_NUM);
								int n = 0;
								for(vector<float>::iterator iter = it->second.begin();
													iter != it->second.end();
													++iter)
								{
									COL_VALUE * colValue = colData->add_colvalue();
									colValue->set_fvalue(*iter);
									colValue->set_rowno(numOfRow[n]);
									n++;
								}
								vector<float> fVtTemp;
								fVtTemp.swap(it->second);
							}
						}
						
						string data;
						if(!raImpTaskAck.SerializeToString(&data))
						{
							DEV_LOG_ERROR("CLreadDBWorkItem::process SerializeToString error");
						}
						else
						{
							CLDSAgent * pAgent = dynamic_cast<CLDSAgent *>((AgentManager::getInstance())->get(getAgentID()));
							if(pAgent == NULL)
							{
								DEV_LOG_ERROR("CLreadDBWorkItem::process get CLDSAgent error!");	
								stmt->closeResultSet(rs);
								conn->terminateStatement(stmt);
								connPool->terminateConnection(conn);
								return FAILED;
							}
							else
							{
								MsgHeader msgHeader;
								msgHeader.cmd = RA_DS_IMPORT_TASK_ACK;
								msgHeader.length = data.length();
								pAgent->sendPackage(msgHeader, data.c_str());					
								data.clear();
							}

							if(rowNum > k)
							{
								rowNum -= k;
								rowNumPerSend = (rowNum > 500000) ? 500000:rowNum;
							}
							else if(rowNum == rowNumPerSend)
							{
								break;
							}

							k = 0;
							noOfPack++;
						}	
					}
				}
			}
		}
		catch(SQLException ex)
		{
			int statusCode = ex.getErrorCode();
			string statusMsg = ex.getMessage();
			string msg = "CLreadDBWorkItem::process get data error, " + intToStr(statusCode) + ", " + statusMsg;
			//ERROR_LOG("CLreadDBWorkItem::process get data error, %d, %s", statusCode, statusMsg.c_str());
			DEV_LOG_ERROR(msg);
			
			MSG_RA_DS_IMPORT_ERROR_INFO_ACK impErrAck;
			impErrAck.set_taskid(m_impTask.taskid);
			impErrAck.set_statuscode(-28);
			impErrAck.set_statusmsg(ex.getMessage());
			string data;
			impErrAck.SerializeToString(&data);
			MsgHeader msgHeader;
			msgHeader.cmd = RA_DS_IMPORT_ERROR_INFO_ACK;
			msgHeader.length = data.length();
			
			CLDSAgent * pAgent = dynamic_cast<CLDSAgent *>((AgentManager::getInstance())->get(getAgentID()));
			if(pAgent == NULL)
			{
				DEV_LOG_ERROR("CLreadDBWorkItem::process:catch get CLDSAgent error");			
				stmt->closeResultSet(rs);
				conn->terminateStatement(stmt);
				connPool->terminateConnection(conn);
				return FAILED;
			}
			else
			{
				pAgent->sendPackage(msgHeader, data.c_str());
				data.clear();
			}
			return FAILED;
		}
		
		stmt->closeResultSet(rs);
		conn->terminateStatement(stmt);
		connPool->terminateConnection(conn);
		//CLDBManager::getInstance()->recycleConn(conn);
	
		return SUCCESSFUL;
	}

