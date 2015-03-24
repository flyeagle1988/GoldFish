#include "RA/CLDBManager.h"
#include <assert.h>
#include "common/log/log.h"
#include "common/comm/Error.h"
#include "common/DevLog/DevLog.h"
#include <sstream>

using namespace std;

extern DevLog *g_pDevLog;

CLDBManager::CLDBManager():m_env(NULL)
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
		DEV_LOG(LEVENT, OUT_SCR, "CLDBManager::~CLDBManager Oracle Environment Terminated!");
	}
	catch(SQLException ex)
	{
		string statusMsg = ex.getMessage();
		int statusCode = ex.getErrorCode();
		string msg = "CLDBManager::~CLDBManager Oracle Environment Terminated ERROR, ";
		
		std::stringstream ss;
		ss << statusCode;
		string code;
		ss >> code;
		msg += code + statusMsg;
		//ERROR_LOG("CLDBManager::~CLDBManager Oracle Environment Terminated ERROR, %d, %s! ", statusCode, statusMsg.c_str());
		DEV_LOG(LERROR, OUT_BOTH, msg);
	}
}

int CLDBManager::initDB()
{
	try
	{
		m_env = Environment::createEnvironment(Environment::THREADED_UNMUTEXED);
		for(map<unsigned int , DB_INFO >::iterator it = m_dbInfo.begin();
						it != m_dbInfo.end();
						++it)
		{
			ConnectionPool * connPool;
			connPool = m_env->createConnectionPool(it->second.dbName, 
													it->second.dbPasswd, 
													it->second.dbConnectString, 
													minConn, maxConn, incrConn);
			if(connPool != NULL)
			{
				string msg = "CLDBManager::initDB: create Connection Pool \" " + intToStr(it->second.dbID) + " \" sucess!";
				//cout << msg.c_str() << endl;
				DEV_LOG(LEVENT, OUT_BOTH, msg);
				m_connPoolMap.insert(make_pair(it->second.dbID, connPool));
			}
		}
		for(ConnPoolMap::iterator it = m_connPoolMap.begin();
								it != m_connPoolMap.end();
								++it)
		{
			DB_INFO dbInfo = getDBInfo(it->first);
			analyzeTable(it->second, dbInfo);
		}
	}
	catch(SQLException ex)
	{
		int statusCode = ex.getErrorCode();
		string statusMsg = "CLDBManager::initDB error: " + intToStr(statusCode) + ", " + ex.getMessage();
		DEV_LOG_ERROR(statusMsg);
		return FAILED;
	}
	return SUCCESSFUL;
}
int CLDBManager::getTableSize(unsigned int dbid, string &tableName, unsigned long &tableSize, unsigned long &rowNum)
{
	Connection * conn = NULL;
	ConnectionPool * connPool = NULL;
	Statement * stmt = NULL;
	ResultSet * rs = NULL;
	int ret = SUCCESSFUL;
	string sql = "select num_rows * avg_row_len, num_rows from user_tables where table_name =";
	string tabName = "\'";
	tabName += tableName;
	tabName += "\'";
	sql += tabName;
	DB_INFO dbInfo = m_dbInfo[dbid];

	try
	{
		//conn = getConnection(dbid);
		connPool = m_connPoolMap[dbid];
		if(connPool == NULL)
		{
			DEV_LOG_ERROR("CLDBManager::getTableSize: get ConnPool error");
			return FAILED;
		}
		conn = connPool->createConnection(dbInfo.dbName, dbInfo.dbPasswd);

		if(conn == NULL)
		{
			DEV_LOG_ERROR("CLDBManager::getTableSize getConnection error!");
			return FAILED;
		}
		MetaData custtab_metaData = conn->getMetaData(tableName, MetaData::PTYPE_TABLE);
		vector <MetaData> listOfColumns = custtab_metaData.getVector(MetaData::ATTR_LIST_COLUMNS);
		//unsigned int uiColumnNum = listOfColumns.size();							
	
		stmt = conn->createStatement(sql);
		rs = stmt->executeQuery();
		while(rs->next())
		{
			tableSize = rs->getDouble(1);
			rowNum = rs->getDouble(2);
		}

		DEV_LOG(LEVENT, OUT_BOTH, "CLDBManager::getTableSize " + tableName + " sucess!");
	}
	catch(SQLException ex)
	{
		int stCode = ex.getErrorCode();
		string stmsg = "CLDBManager::getTableSize error: " + intToStr(stCode) + ", " + ex.getMessage();
		DEV_LOG_ERROR(stmsg);
		ret = FAILED;
	}
	
	stmt->closeResultSet(rs);
	conn->terminateStatement(stmt);
	connPool->terminateConnection(conn);
	
	return ret;
}

int CLDBManager::analyzeTable(ConnectionPool * connPool, DB_INFO &dbInfo)
{
	Connection * conn = NULL;
	Statement * stmt = NULL;
	Statement * analyzeStmt = NULL;
	ResultSet * rs = NULL;
	string sqlTable = "select table_name from user_tables";
	int ret = SUCCESSFUL;
	try
	{
		if(connPool ==NULL)
		{
			DEV_LOG_ERROR("CLDBManager::analyzeTable: connPool is NULL!");
			return FAILED;
		}
		conn = connPool->createConnection(dbInfo.dbName, dbInfo.dbPasswd);
		if(conn == NULL)
		{
			DEV_LOG_ERROR("CLDBManager::analyzeTable: getConnection error!");
			return FAILED;
		}
		
		stmt = conn->createStatement(); 
		stmt->setSQL(sqlTable);
		rs = stmt->executeQuery();

		while(rs->next())
		{
			string tableName = rs->getString(1);				
			string sql = "analyze table " + tableName + " compute statistics";
			analyzeStmt = conn->createStatement(); 
			analyzeStmt->setSQL(sql);
			analyzeStmt->executeUpdate();
		}

	}
	catch(SQLException ex)
	{
		int stCode = ex.getErrorCode();
		string stmsg = "CLDBManager::analyzeTable error: " + intToStr(stCode) + ", " + ex.getMessage();
		DEV_LOG_ERROR(stmsg);
		ret = FAILED;
	}
	
	conn->terminateStatement(stmt);
	conn->terminateStatement(analyzeStmt);
	connPool->terminateConnection(conn);
	return ret;
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
	//string sql = "select table_name from user_tab_comments";
	DB_INFO dbInfo = m_dbInfo[dbID];

	ConnectionPool * connPool;
	
	try
	{
		connPool = m_connPoolMap[dbID];
		if(connPool == NULL)
		{
			DEV_LOG_ERROR("CLDBManager::readMetaData: get ConnPool error!");
			return FAILED;
		}
		conn = connPool->createConnection(dbInfo.dbName, dbInfo.dbPasswd);
		if(conn == NULL)
		{
			DEV_LOG_ERROR("CLDBManager::readMetaData: getConnection error!");
			return FAILED;
		}
		stmt = conn->createStatement(sql);
		rs = stmt->executeQuery();

		while(rs->next())
		{
			DB_META dbMeta;
			dbMeta.tableName = rs->getString(1);
			dbMeta.tableSize = rs->getDouble(2);
			dbMeta.rowNum = rs->getDouble(3);

			MetaData custtab_metaData = conn->getMetaData(dbMeta.tableName, MetaData::PTYPE_TABLE);
			vector <MetaData> listOfColumns = custtab_metaData.getVector(MetaData::ATTR_LIST_COLUMNS);

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
						dbMeta.columnType.push_back(0);	//  VARCHAR(string):0
						break;
					}
					case OCCI_SQLT_TIMESTAMP:
					case OCCI_SQLT_TIMESTAMP_TZ:
					{
						dbMeta.columnType.push_back(4);	//Timestamp(string):4
						break;
					}
					case OCCI_SQLT_STR:
					case OCCI_SQLT_VCS:
					case OCCI_SQLT_CHR:
					{
						dbMeta.columnType.push_back(0);	// VARCHAR(string):0
						break;
					}
					case OCCIINT:
					{
						dbMeta.columnType.push_back(1); //INTTYPE:1
						break;
					}
					case OCCIFLOAT:
					{
						dbMeta.columnType.push_back(2); //DOUBLETYPE:2
						break;
					}
					case OCCI_SQLT_NUM:
					{
						dbMeta.columnType.push_back(2); //DOUBLE:2
						break;
					}
					case OCCI_SQLT_BLOB:
					{
						dbMeta.columnType.push_back(3);//BLOB(STRING):3
						break;
					}
					default:
					{
						dbMeta.columnType.push_back(0);
						break;
					}
				}
			}
			dbMetaInfo.dbID = dbID;
			dbMetaInfo.dbMetaData.push_back(dbMeta);
		}
		statusMsg = "success";
	}
	catch(SQLException ex)
	{
		statusMsg = ex.getMessage();
		string msg = "CLDBManager::readMetaData error, " + intToStr(ex.getErrorCode()) + ", " + statusMsg;
		DEV_LOG_ERROR(msg);
		//ERROR_LOG("CLDBManager::getMetaData error, %d, %s",ex.getErrorCode(), statusMsg.c_str());
		//statusCode = -17;
		ret = FAILED;
		
	}
	
	stmt->closeResultSet(rs);
	conn->terminateStatement(stmt);
	connPool->terminateConnection(conn);

	return ret;
}
