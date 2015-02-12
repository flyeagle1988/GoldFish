#include <gtest/gtest.h>
#include <iostream>
#include "RA/CLDBManager.h"
#include "RA/raXmlParse.h"
#include <map>
using namespace std;

TEST(CLDBManager, initDB)//passed
{
	RAXmlParse xmlParse("../RA_TEST/ra_config.xml");
	xmlParse.parse();

	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	map<unsigned int, DB_INFO> dbInfoMap;
	//test initDB and create connection pool
	int ret = CLDBManager::getInstance()->initDB();
	ASSERT_TRUE(ret == 0);			
}


TEST(CLDBManager, readMetaData)//passed
{
	RAXmlParse xmlParse("../RA_TEST/ra_config.xml");
	xmlParse.parse();

	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	map<unsigned int, DB_INFO> dbInfoMap = xmlParse.getDBInfoMap();
	CLDBManager::getInstance()->initDB();

	int rt = -1;
	string statusMsg;
	DB_META_INFO dbMetaInfo;
	cout<<"test readMetaData"<< endl;

	map<unsigned int, DB_INFO>::iterator it = dbInfoMap.begin();
	cout << "DB ID: " << it->first << '\t'
		 << "DB Name: " << it->second.dbName << '\t'
		 << "DB Passwd: " << it->second.dbPasswd << '\t'
		 << "DB ConnString:" << it->second.dbConnectString << endl;
	
	rt = CLDBManager::getInstance()->readMetaData(it->second.dbID, statusMsg);
	dbMetaInfo = CLDBManager::getInstance()->getMetaData();
	
	for(vector<DB_META>::iterator iter = dbMetaInfo.dbMetaData.begin();
								iter != dbMetaInfo.dbMetaData.end();
								++iter)
		{
			cout << "TableName: " << (*iter).tableName.c_str() << endl;
			cout << "TableSize: " << (*iter).tableSize << endl;
			cout << "RowNum: " << (*iter).rowNum << endl;
			for(unsigned int i = 0; i < (*iter).columns.size(); ++i)
			{
				cout << "ColumnName: " << (*iter).columns[i].c_str() << '\t'
				 	 << "ColumnType: " << (*iter).columnType[i] << endl;
			}
		}
	
	ASSERT_TRUE(rt == 0);

}

TEST(CLDBManager, getTableSize)//passed
{
	RAXmlParse xmlParse("../RA_TEST/ra_config.xml");
	xmlParse.parse();

	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	CLDBManager::getInstance()->initDB();
	map<unsigned int, DB_INFO> dbInfoMap = xmlParse.getDBInfoMap();
	map<unsigned int, DB_INFO>::iterator it = dbInfoMap.begin();

	string tableName = "TEST";
	unsigned long tableSize = 0;
	unsigned long rowNum = 0;
	int ret = CLDBManager::getInstance()->getTableSize(it->second.dbID, tableName, tableSize, rowNum);
	cout << tableName.c_str() << '\t' << tableSize << '\t' << rowNum << endl;
	ASSERT_TRUE(ret == 0);
}

TEST(CLDBManager, getDBID)
{
	RAXmlParse xmlParse("../RA_TEST/ra_config.xml");
	xmlParse.parse();

	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	CLDBManager::getInstance()->initDB();
	map<unsigned int, DB_INFO> dbInfoMap = xmlParse.getDBInfoMap();
	map<unsigned int, DB_INFO>::iterator it = dbInfoMap.begin();

	vector<unsigned int> testVec;
	testVec.push_back(it->second.dbID);
	vector<unsigned int> getVec;
	CLDBManager::getInstance()->getDBID(getVec);
	for(unsigned int i = 0; i < getVec.size(); i++)
	{
		cout << getVec[i] << endl;
	}
	ASSERT_TRUE(testVec == getVec);
}

