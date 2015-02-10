#ifndef CL_DB_MANAGER_H_
#define CL_DB_MANAGER_H_

#include<occi.h>                                                                
#include<vector>   
#include<string>
#include<map>
#include "common/sys/Singleton.h"
#include <iostream>
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h" 
#include "RA/dbInfo.h"

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
		void setDBInfo(DB_INFO dbInfo)
		{
			m_dbInfo[dbInfo.dbID] = dbInfo;
		}
		int initDB();
		int readMetaData(unsigned int dbID, string &statusMsg, DB_META_INFO &dbMetaInfo);
		Connection * getConnection(unsigned int);
		void recycleConn(Connection *);
		void getDBID(vector<unsigned int> &);
		int getTableSize(unsigned int dbid, string &tableName, unsigned long &tableSize, unsigned long &rowNum);
	private:
		typedef map<unsigned int, ConnectionPool *> ConnPoolMap;
		typedef map<unsigned int , unsigned int > ConnIDMap;
		typedef map<unsigned int, Connection *> ConnMap;
		map<unsigned int , DB_INFO > m_dbInfo;
		ConnPoolMap m_connPoolMap;
		ConnIDMap m_connIDMap;
		ConnMap m_connMap;
		unsigned int m_connID;
		Environment * m_env;
};

#endif
