//#include "RA/CLgetMetaWorkItem.h"
#include "RA/CLgetMeta.h"
#include "common/comm/Error.h"
#include "common/log/log.h"
#include "protocol/DIS/MSG_DC_RA_DATABASE_INFO_GET.pb.h"
#include "RA/CLDBManager.h"
#include "RA/dbInfo.h"

using namespace std;

CLgetMeta::CLgetMeta():m_metaData("")
{

}

CLgetMeta::~CLgetMeta()
{
}

int CLgetMeta::process()
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
		ret = CLDBManager::getInstance()->readMetaData(*it, statusMsg);
		dbMetaInfo = CLDBManager::getInstance()->getMetaData();
		if(ret == FAILED)
		{
			statusCode = -17;
			cout << "readMeta error" << endl;
		}
		dbMetaInfoVec.push_back(dbMetaInfo);
	}

	MSG_RA_DC_DATABASE_INFO_GET_ACK raDBInfo;
	raDBInfo.set_statuscode(statusCode);
	raDBInfo.set_statusmsg(statusMsg);

	for(vector<unsigned int>::iterator it = dbIDVec.begin();
							it != dbIDVec.end();
							++it)
	{
		DATABASE_INFO *dbInfo = raDBInfo.add_dbinfo();
		dbInfo->set_dbid(*it);
		for(vector<DB_META_INFO>::iterator iter = dbMetaInfoVec.begin();
								iter != dbMetaInfoVec.end();
								++iter)
		{
			for(vector<DB_META>::iterator i = (*iter).dbMetaData.begin();
								i != (*iter).dbMetaData.end();
								++i)
			{
				TABLE_INFO * tabInfo = dbInfo->add_tableinfo();
				tabInfo->set_tablename((*i).tableName);
				tabInfo->set_rownum((*i).rowNum);
				tabInfo->set_tablesize((*i).tableSize);
				int j = 0;
				for(vector<string>::iterator sit = (*i).columns.begin();
									sit != (*i).columns.end();
									++sit)
				{
					COLUMN_INFO * colInfo = tabInfo->add_columndata();
					colInfo->set_colname(*sit);
					switch((*i).columnType[j])
					{
						case 0:
						{
							colInfo->set_coltype(COLUMN_INFO_COLUMN_TYPE_STRING);
							break;
						}
						case 1:
						{
							colInfo->set_coltype(COLUMN_INFO_COLUMN_TYPE_INT);
							break;
						}
						case 2:
						{
							colInfo->set_coltype(COLUMN_INFO_COLUMN_TYPE_FLOAT);
						}
						case 3:
						{
							colInfo->set_coltype(COLUMN_INFO_COLUMN_TYPE_DOUBLE);
						}
					}
					j++;
				}
			}
		}
	}
	string data;
	if(!raDBInfo.SerializeToString(&data))
	{
		cerr << "CLgetMetaWorkItem::process: serialize to string error!" << endl;
		return FAILED;
	}
	setData(data);
	return SUCCESSFUL;
}

