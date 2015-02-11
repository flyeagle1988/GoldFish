#include <gtest/gtest.h>
#include "RA/raXmlParse.h"
#include "RA/dbInfo.h"

TEST(RAXmlParse, parse)
{
    RAXmlParse raXmlParse("ra_config.xml");
    raXmlParse.parse();

    DB_INFO databaseInfo;
    databaseInfo.dbID = 1;
    databaseInfo.dbName = "scott";
    databaseInfo.dbPasswd = "tiger";
	databaseInfo.dbConnectString = "http://localhost:1521/ORCL";

	unsigned int dcPort = 10010;
	unsigned int dsPort = 10011;
	unsigned int deltaCapacity = 100000;

	
}
