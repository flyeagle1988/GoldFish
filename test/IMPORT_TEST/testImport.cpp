#include <gtest/gtest.h>
#include <iostream>
#include "RA/CLreadDB.h"
#include "RA/CLDBManager.h"
#include "RA/raXmlParse.h"
#include "common/comm/Error.h"
#include "common/log/log.h"
#include "RA/dbInfo.h"

TEST(CLreadDB, process)
{
	RAXmlParse xmlParse("ra_config.xml");
	xmlParse.parse();
	
	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	int ret = -1;
	(CLDBManager::getInstance())->initDB();	

	IMPORT_INFO impInfo;
	impInfo.taskid = 1;
	impInfo.dbID = 1;
	impInfo.tableName = "TEST";
	string col1 = "ID";
	string col2 = "NAME";
	string col3 = "JOB";
	impInfo.colName.push_back(col1);
	impInfo.colName.push_back(col2);
	impInfo.colName.push_back(col3);

	CLreadDB * pReadDB = new CLreadDB();
	pReadDB->setImpTask(impInfo);
	ret = pReadDB->process();
	ASSERT_TRUE(ret == 0);
}
