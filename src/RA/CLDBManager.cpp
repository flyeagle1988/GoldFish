#include "RA/CLDBManager.h"
#include <assert.h>
#include "common/log/log.h"
#include "common/comm/Error.h"
//using namespace oracle::occi; 
using namespace std;


CLDBManager::CLDBManager():m_connID(0)
{
}

CLDBManager::~CLDBManager()
{
	try
	{
		for(ConnPoolMap::iterator it = m_connPoolMap.begin();
					it != m_connPoolMap.end();
					++it)
		{
			m_env->terminateConnectionPool(it->second);
		}
		Environment::terminateEnvironment(m_env);
		cout << "CLDBManager::~CLDBManager Oracle Environment Terminated!" << endl;
	}
	catch(SQLException ex)
	{
		string statusMsg = ex.getMessage();
		int statusCode = ex.getErrorCode();
		ERROR_LOG("CLDBManager::~CLDBManager Oracle Environment Terminated ERROR, %d, %s! ", statusCode, statusMsg.c_str());
	}
}

int CLDBManager::initDB()
{
	try
	{
		m_env = Environment::createEnvironment(Environment::THREADED_MUTEXED);
		for(map<unsigned int , DB_INFO >::iterator it = m_dbInfo.begin();
						it != m_dbInfo.end();
						++it)
		{
			ConnectionPool * connPool;
			connPool = m_env->createConnectionPool(it->second.dbName, 
													it->second.dbPasswd, 
													it->second.dbConnectString, 
													minConn, maxConn, incrConn);
		}
	}
	catch(SQLException ex)
	{
		int statusCode = ex.getErrorCode();
		string statusMsg = ex.getMessage();

		ERROR_LOG("CLDBManager::initDB error, %d, %s!", statusCode, statusMsg.c_str());
		return FAILED;
	}
	return SUCCESSFUL;
}
int CLDBManager::getTableSize(unsigned int dbid, string &tableName, unsigned long &tableSize, unsigned long &rowNum)
{
	Connection * conn = NULL;
	Statement * stmt = NULL;
	ResultSet * rs = NULL;
	int ret = SUCCESSFUL;
	string sql = "select num_rows * avg_row_len, num_rows from user_tables where table_name =";
	string tabName = "\'";
	tabName += tableName;
	tabName += "\'";
	sql += tabName;
	try
	{
		conn = getConnection(dbid);
		if(conn == NULL)
		{
			cerr << "CLDBManager::getTableSize getConnection error!" << endl;
		}
		MetaData custtab_metaData = conn->getMetaData(tableName, MetaData::PTYPE_TABLE);
		vector <MetaData> listOfColumns = custtab_metaData.getVector(MetaData::ATTR_LIST_COLUMNS);
		//unsigned int uiColumnNum = listOfColumns.size();							
	
		stmt = conn->createStatement(sql);
		rs = stmt->executeQuery();

		if(rs)
		{
			while(rs->next())
			{
				tableSize = rs->getDouble(1);
				rowNum = rs->getDouble(2);
			}
		}
	}
	catch(SQLException ex)
	{
		int stCode = ex.getErrorCode();
		string stmsg = ex.getMessage();
		ERROR_LOG("CLDBManager::getTableSize error, %d, %s", stCode, stmsg.c_str());
		ret = FAILED;
	}
	
	stmt->closeResultSet(rs);
	conn->terminateStatement(stmt);
	recycleConn(conn);
	//m_connPool->terminateConnection(conn);
	return ret;
}

Connection * CLDBManager::getConnection(unsigned int dbID)
{
	Connection * conn = NULL;	
	ConnectionPool * connPool;
	try
	{
		ConnPoolMap::const_iterator it = m_connPoolMap.find(dbID);
		if(it == m_connPoolMap.end())
		{
			cerr << "CLDBManager::getConnection no this connection" << endl;
			return NULL;
		}
		else
		{
			DB_INFO dbInfo;
			dbInfo = m_dbInfo[dbID];
			connPool = it->second;
			conn = connPool->createConnection(dbInfo.dbName, dbInfo.dbPasswd);
			m_connMap[m_connID] = conn;
			m_connIDMap[m_connID] = dbID;
			m_connID++;
		}
	}
	catch(SQLException &ex)
	{
		int stCode = ex.getErrorCode();
		string stmsg = ex.getMessage();
		ERROR_LOG("CLDBManager::getDBConnection error, %d, %s!", stCode, stmsg.c_str());
		conn = NULL;
	}
	return conn;
}

void CLDBManager::recycleConn(Connection *conn)
{
	try
	{
		ConnMap::iterator it;
		for(it = m_connMap.begin();	it != m_connMap.end(); ++it)
		{
			if(it->second == conn)
			{
				unsigned int dbID;
				dbID = m_connIDMap[it->first];
				ConnectionPool * connPool;
				connPool = m_connPoolMap[dbID];
				connPool->terminateConnection(conn);
			}
		}
		if(it == m_connMap.end())
		{
			cerr << "CLDBManager::recycleConn error!" << endl;
		}
		
	}
	catch(SQLException ex)
	{
		int stCode = ex.getErrorCode();
		string stmsg = ex.getMessage();
		ERROR_LOG("CLDBManager::recycleConn error, %d, %s!", stCode, stmsg.c_str());
	}
}

void CLDBManager::getDBID(vector < unsigned int > &dbIDVec)
{
	for(map<unsigned int , DB_INFO >::iterator it = m_dbInfo.begin();
									it != m_dbInfo.end();
									++it)
	{
		dbIDVec.push_back(it->second.dbID);
	}
}

int CLDBManager::readMetaData(unsigned int dbID, string &statusMsg, DB_META_INFO &dbMetaInfo)
{
	Connection * conn = NULL;
	Statement * stmt = NULL;
	ResultSet * rs = NULL;
	int ret = SUCCESSFUL;
	string sql = "select table_name,num_rows * avg_row_len, num_rows from user_tables";
	DB_INFO dbInfo = m_dbInfo[dbID];

	ConnectionPool * connPool;
	
	try
	{
		connPool = m_connPoolMap[dbID];
		//conn = m_connPool->createConnection(m_dbInfo.dbName, m_dbInfo.dbPasswd, m_dbInfo.dbConnectString);
		conn = connPool->createConnection(dbInfo.dbName, dbInfo.dbPasswd);
		stmt = conn->createStatement(sql);
		rs = stmt->executeQuery();
		if(rs)
		{
			while(rs->next())
			{
				DB_META dbMeta;
				dbMeta.tableName = rs->getString(1);
				dbMeta.tableSize = rs->getDouble(2);
				dbMeta.rowNum = rs->getDouble(3);

				MetaData custtab_metaData = conn->getMetaData(dbMeta.tableName, MetaData::PTYPE_TABLE);
				vector <MetaData> listOfColumns = custtab_metaData.getVector(MetaData::ATTR_LIST_COLUMNS);
				//unsigned int uiColumnNum = listOfColumns.size();                            

				for(vector<MetaData>::iterator i = listOfColumns.begin();                   
					i != listOfColumns.end();                                   
					++i)                                                        
				{                                                                           
					MetaData columnObj = *i;                                                
					string colName = columnObj.getString(MetaData::ATTR_NAME);
					int colType = columnObj.getInt(MetaData::ATTR_DATA_TYPE);
					dbMeta.columns.push_back(colName);
					switch(colType)
					{
						case OCCI_SQLT_DATE:
						case OCCI_SQLT_DAT:
						{
							dbMeta.columnType.push_back(0);	//STRING:0
							break;
						}
						case OCCI_SQLT_TIMESTAMP:
						case OCCI_SQLT_TIMESTAMP_TZ:
						{
							dbMeta.columnType.push_back(0);
							break;
						}
						case OCCI_SQLT_STR:
						case OCCI_SQLT_VCS:
						case OCCI_SQLT_CHR:
						{
							dbMeta.columnType.push_back(0);
							break;
						}
						case OCCIINT:
						{
							dbMeta.columnType.push_back(1); //INT:1
							break;
						}
						case OCCIFLOAT:
						{
							dbMeta.columnType.push_back(2); //FLOAT:2
							break;
						}
						case OCCI_SQLT_NUM:
						{
							dbMeta.columnType.push_back(3); //DOUBLE:3
							break;
						}
						case OCCI_SQLT_BLOB:
						{
							dbMeta.columnType.push_back(0);//STRING:0
							break;
						}
						default:
						{
							dbMeta.columnType.push_back(0);
							break;
						}
					}
				}
				dbMetaInfo.dbMetaData.push_back(dbMeta);
			}
			statusMsg = "success";
		}
	}
	catch(SQLException ex)
	{
		statusMsg = ex.getMessage();
		ERROR_LOG("CLDBManager::getMetaData error, %d, %s",ex.getErrorCode(), statusMsg.c_str());
		//statusCode = -17;
		ret = FAILED;
		
	}
	
	stmt->closeResultSet(rs);
	conn->terminateStatement(stmt);
	connPool->terminateConnection(conn);

	return ret;
}
