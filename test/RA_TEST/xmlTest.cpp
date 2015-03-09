#include <gtest/gtest.h>
#include <iostream>
#include "RA/raXmlParse.h"
#include "RA/dbInfo.h"
#include <map>
using namespace std;

TEST(RAXmlParse, parse)
{
    RAXmlParse raXmlParse("ra_config.xml");
    raXmlParse.parse();

    DB_INFO databaseInfo;

    databaseInfo.dbID = 1;
    databaseInfo.dbName = "scott";
    databaseInfo.dbPasswd = "tiger";
	//databaseInfo.dbConnectString = "http://localhost:1521/ORCL";
	databaseInfo.dbConnectString = "";
    DB_INFO databaseInfo2;

    databaseInfo2.dbID = 2;
    databaseInfo2.dbName = "oracle";
    databaseInfo2.dbPasswd = "Oracle8020";
	databaseInfo2.dbConnectString = "orcl";	

	unsigned int dcPort = 10010;
	unsigned int dsPort = 10011;
	unsigned int deltaCapacity = 100000;

	//map<unsigned int, DB_INFO> dbInfoMap;
	//dbInfoMap[databaseInfo.dbID] = databaseInfo;

	map<unsigned int, DB_INFO> dbInfoMap = raXmlParse.getDBInfoMap();

	map<unsigned int, DB_INFO>::iterator it = dbInfoMap.begin();
	DB_INFO dbInfoReturn = it->second;
	++it;
	DB_INFO dbInfoReturn2 = it->second;
	
	ASSERT_TRUE(dcPort == raXmlParse.getDCPort());
	ASSERT_TRUE(dsPort == raXmlParse.getDSPort());
	ASSERT_TRUE(deltaCapacity == raXmlParse.getDeltaCap());
	ASSERT_TRUE(databaseInfo.dbID == dbInfoReturn.dbID);
	ASSERT_TRUE(databaseInfo.dbName == dbInfoReturn.dbName);
	ASSERT_TRUE(databaseInfo.dbPasswd == dbInfoReturn.dbPasswd);
	ASSERT_TRUE(databaseInfo.dbConnectString == dbInfoReturn.dbConnectString);

	ASSERT_TRUE(databaseInfo2.dbID == dbInfoReturn2.dbID);
	ASSERT_TRUE(databaseInfo2.dbName == dbInfoReturn2.dbName);
	ASSERT_TRUE(databaseInfo2.dbPasswd == dbInfoReturn2.dbPasswd);
	ASSERT_TRUE(databaseInfo2.dbConnectString == dbInfoReturn2.dbConnectString);

}
