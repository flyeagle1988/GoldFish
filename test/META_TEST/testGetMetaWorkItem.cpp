#include <gtest/gtest.h>
#include <iostream>
#include "CLgetMeta.h"
#include "RA/CLDBManager.h"
#include "RA/raXmlParse.h"
#include "common/comm/Error.h"
#include "common/log/log.h"
#include "protocol/DIS/MSG_DC_RA_DATABASE_INFO_GET.pb.h"
#include "RA/CLDBManager.h"
#include "protocol/dbInfo.h"
using namespace std;

TEST(CLgetMeta, process)//passed
{
	RAXmlParse xmlParse("ra_config.xml");
	xmlParse.parse();
	
	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	//test initDB and create connection pool
	int ret = -1;
	(CLDBManager::getInstance())->initDB();			
	
	CLgetMeta *pGetMeta = new CLgetMeta();
	ret = pGetMeta->process();
	ASSERT_TRUE(ret == 0);	

	MSG_RA_DC_DATABASE_INFO_GET_ACK raDBInfo;
	string data = pGetMeta->getData();
	if(!raDBInfo.ParseFromString(data))
	{
		cerr << "parse error" << endl;
	}
	else
	{
		int statusCode = raDBInfo.statuscode() ;
		cout << statusCode << endl;
		string statusMsg = raDBInfo.statusmsg();
		cout << statusMsg.c_str() << endl;

		for(int i = 0; i < raDBInfo.dbinfo_size(); i++)
		{
			const DATABASE_INFO & dbInfo = raDBInfo.dbinfo(i);
			int dbID = dbInfo.dbid();
			cout << "DB_ID: " << dbID << endl;
			for(int j = 0; j < dbInfo.tableinfo_size(); j++)
			{
				const TABLE_INFO & tbInfo = dbInfo.tableinfo(j);
				string tableName = tbInfo.tablename();
				unsigned int rowNum = tbInfo.rownum();
				unsigned long tableSize = tbInfo.tablesize();
				cout << '\t' << tableName.c_str() << '\t' << rowNum << '\t' << tableSize << endl;

				for(int k = 0; k < tbInfo.columndata_size(); k++)
				{
					const COLUMN_INFO & colInfo = tbInfo.columndata(k);
					string colName = colInfo.colname();
					cout << colName.c_str() << '\t' ;
					switch(colInfo.coltype())
					{
						case COLUMN_INFO::STRING:
						{
							cout << "string" << endl;
							break;
						}
						case COLUMN_INFO::INT:
						{
							cout << "INT" << endl;
							break;
						}
						case COLUMN_INFO::FLOAT:
						{
							cout << "FLOAT" << endl;
							break;
						}
						case COLUMN_INFO::DOUBLE:
						{
							cout << "DOUBLE" << endl;
							break;
						}
					}
				}
			}
		}
	}
}
