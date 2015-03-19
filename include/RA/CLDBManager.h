#ifndef CL_DB_MANAGER_H_
#define CL_DB_MANAGER_H_

#include<occi.h>                                                                
#include<vector>   
#include<string>
#include<map>
#include "common/sys/Singleton.h"
#include <iostream>
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h" 
#include "protocol/dbInfo.h"

using std::vector;
using std::string;
using std::map;
using namespace oracle::occi;

const unsigned int maxConn = 11;
const unsigned int minConn = 1;
const unsigned int incrConn = 2;

class CLDBManager:public Singleton<CLDBManager>
{
	friend class Singleton<CLDBManager>;

	public:
		CLDBManager();
		~CLDBManager();
		void setDBInfo(map<unsigned int , DB_INFO > dbInfo)
		{
			//m_dbInfo[dbInfo.dbID] = dbInfo;
			m_dbInfo = dbInfo;
		}
		int initDB();
		int readMetaData(unsigned int dbID, string &statusMsg, DB_META_INFO &dbMetaInfo);
		/*
		DB_META_INFO getMetaData()
		{
			return m_dbMetaInfo;
		}
		*/
		//Connection * getConnection(unsigned int);
		//void recycleConn(Connection *);
		void getDBID(vector<unsigned int> &);
		DB_INFO getDBInfo(unsigned int dbid)
		{
			return m_dbInfo[dbid];
		}
		ConnectionPool * getConnPool(unsigned int dbid)
		{
			return m_connPoolMap[dbid];
		}
		string getDBUserName(unsigned int dbid) 
		{
			return m_dbInfo[dbid].dbName;
		}
		int getTableSize(unsigned int dbid, string &tableName, unsigned long &tableSize, unsigned long &rowNum);
		int analyzeTable(ConnectionPool *, DB_INFO &);
	private:
		typedef map<unsigned int, ConnectionPool *> ConnPoolMap;	//map<dbid, connpool>
		typedef map<unsigned int , unsigned int > ConnIDMap;		//map<>
		typedef map<unsigned int, Connection *> ConnMap;		//map<connID, conn*>
		map<unsigned int , DB_INFO > m_dbInfo;			//map<dbid, DB_INFO>
		ConnPoolMap m_connPoolMap;
		ConnIDMap m_connIDMap;
		ConnMap m_connMap;
		//DB_META_INFO m_dbMetaInfo;
		Environment * m_env;
};

#endif
