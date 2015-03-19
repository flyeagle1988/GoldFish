#include "RA/CLgetMetaWorkItem.h"
#include "common/comm/Error.h"
#include "common/log/log.h"
#include "protocol/DIS/MSG_DC_RA_DATABASE_INFO_GET.pb.h"
#include "protocol/DIS/common.pb.h"
#include "RA/CLDBManager.h"
#include "protocol/dbInfo.h"
#include "common/DevLog/DevLog.h"
#include "common/comm/Epoll.h"
#include "common/sys/ThreadPool.h"
#include "common/util/util.h"
using namespace std;

extern DevLog * g_pDevLog;
CLgetMetaWorkItem::CLgetMetaWorkItem():m_metaData("")
{

}

CLgetMetaWorkItem::~CLgetMetaWorkItem()
{
}

int CLgetMetaWorkItem::process()
{
	vector<unsigned int> dbIDVec;
	(CLDBManager::getInstance())->getDBID(dbIDVec);

	vector<DB_META_INFO> dbMetaInfoVec;
	string statusMsg;
	int statusCode = 0;
	int ret = 0;

	for(vector<unsigned int>::iterator it = dbIDVec.begin();
							it != dbIDVec.end();
							++it)
	{
		DB_META_INFO dbMetaInfo;
		dbMetaInfo.dbID = *it;
		ret = CLDBManager::getInstance()->readMetaData(*it, statusMsg, dbMetaInfo);
		
		if(ret == FAILED)
		{
			statusCode = -17;
		}
		else
		{
			//dbMetaInfo = CLDBManager::getInstance()->getMetaData();
			dbMetaInfoVec.push_back(dbMetaInfo);
		}
	}

	MSG_RA_DC_DATABASE_INFO_GET_ACK raDBInfo;
	raDBInfo.set_statuscode(statusCode);
	raDBInfo.set_statusmsg(statusMsg);

	for(vector<DB_META_INFO>::iterator iter = dbMetaInfoVec.begin();
							iter != dbMetaInfoVec.end();
							++iter)
	{
	
		DATABASE_INFO * dbInfo = raDBInfo.add_dbinfo();
		string user = CLDBManager::getInstance()->getDBUserName((*iter).dbID);
		dbInfo->set_dbname(user);
		//dbInfo->set_dbid(*it);
		dbInfo->set_dbid((*iter).dbID);

		for(vector<DB_META>::iterator i = (*iter).dbMetaData.begin();
							i != (*iter).dbMetaData.end();
							++i)
		{
			TB_INFO * tabInfo = dbInfo->add_tbinfo();
			string tablename = (*i).tableName;

			tabInfo->set_tbname((*i).tableName);
			tabInfo->set_rownum((*i).rowNum);
			tabInfo->set_tbsize((*i).tableSize);
			int j = 0;
			for(vector<string>::iterator sit = (*i).columns.begin();
								sit != (*i).columns.end();
								++sit)
			{
				COLUMN_INFO * colInfo = tabInfo->add_columninfo();
				colInfo->set_columnname(*sit);
				switch((*i).columnType[j])
				{
					case 0:
					{
						colInfo->set_columntype(COLUMN_INFO_ColumnType_VARCHAR);
						break;
					}
					case 1:
					{
						colInfo->set_columntype(COLUMN_INFO_ColumnType_INTTYPE);
						break;
					}
					case 2:
					{
						colInfo->set_columntype(COLUMN_INFO_ColumnType_DOUBLETYPE);
						break;
					}
					case 3:
					{
						colInfo->set_columntype(COLUMN_INFO_ColumnType_BLOB);
						break;
					}
					case 4:
					{
						colInfo->set_columntype(COLUMN_INFO_ColumnType_TIMESTAMP);
						break;
					}
					default:
					{
						colInfo->set_columntype(COLUMN_INFO_ColumnType_VARCHAR);
						break;
					}
				}
				j++;
			}
		}
	}

	string data;
	if(!raDBInfo.SerializeToString(&data))
	{
		DEV_LOG_ERROR("CLgetMetaWorkItem::process: serialize to string error!");
		return FAILED;
	}
	setData(data);
	return SUCCESSFUL;
}
