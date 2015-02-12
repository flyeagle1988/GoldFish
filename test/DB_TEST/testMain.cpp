
#include <gtest/gtest.h>
#include <iostream>
#include "RA/CLDBManager.h"
#include "RA/raXmlParse.h"
#include <map>
using namespace std;

int main(int argc, char * argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	#if 0
	RAXmlParse xmlParse("../RA_TEST/ra_config.xml");
	xmlParse.parse();

	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	map<unsigned int, DB_INFO> dbInfoMap = xmlParse.getDBInfoMap();
	CLDBManager::getInstance()->initDB();

	int rt = -1;
	string statusMsg;
	DB_META_INFO dbMetaInfo;
	cout<<"test readMetaData"<< endl;
	cout << "rt: " << rt << endl;

	map<unsigned int, DB_INFO>::iterator it = dbInfoMap.begin();
	cout << "DB ID: " << it->second.dbID << '\t'
		 << "DB Name: " << it->second.dbName << '\t'
		 << "DB Passwd: " << it->second.dbPasswd << '\t'
		 << "DB ConnString:" << it->second.dbConnectString << endl;
	
	rt = CLDBManager::getInstance()->readMetaData(it->second.dbID, statusMsg);
	cout << "rt: " << rt << endl;
	dbMetaInfo = CLDBManager::getInstance()->getMetaData();
	cout << "STATUS: " << statusMsg.c_str() << endl;
	cout << "DB_ID: " << dbMetaInfo.dbID << endl;
	
	for(vector<DB_META>::iterator iter = dbMetaInfo.dbMetaData.begin();
								iter != dbMetaInfo.dbMetaData.end();
								++iter)
		{
			cout << "TableName: " << (*iter).tableName.c_str() << endl;
			cout << "TableSize: " << (*iter).tableSize << endl;
			cout << "RowNum: " << (*iter).rowNum << endl;
			for(unsigned int i = 0; i < (*iter).columns.size(); ++i)
			{
				cout << "ColumnName: " << (*iter).columns[i].c_str() << endl;
				cout << "ColumnType: " << (*iter).columnType[i] << endl;
			}
		}
	
	for(map<unsigned int, DB_INFO>::iterator it = dbInfoMap.begin();
						it != dbInfoMap.end();
						++it)
	{
		string statusMsg;
		DB_META_INFO dbMetaInfo;
		cout<<"test readMetaData"<< endl;
		
		for(vector<DB_META>::iterator iter = dbMetaInfo.dbMetaData.begin();
								iter != dbMetaInfo.dbMetaData.end();
								++iter)
		{
			cout << "TableName: " << (*iter).tableName.c_str() << endl;
			cout << "TableSize: " << (*iter).tableSize << endl;
			cout << "RowNum: " << (*iter).rowNum << endl;
			for(unsigned int i = 0; i < (*iter).columns.size(); ++i)
			{
				cout << "ColumnName: " << (*iter).columns[i].c_str() << endl;
				cout << "ColumnType: " << (*iter).columnType[i] << endl;
			}
		}
		
	}
	

	return 0;
	#endif
}
