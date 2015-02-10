#ifndef DB_INFO_H_
#define DB_INFO_H_
#include <string>
#include <vector>
#include <map>
using std::string;
using std::map;
using std::vector;

struct DB_INFO
{
	unsigned int dbID;
    std::string dbName;
    std::string dbPasswd;
    std::string dbConnectString;

	bool operator==(const DB_INFO& dbInfo)
    {
		if(dbID != dbInfo.dbID)
			return false;
		if(dbName != dbInfo.dbName)
            return false;
        if(dbPasswd != dbInfo.dbPasswd)
            return false;
		if(dbConnectString != dbInfo.dbConnectString)
        return true;
    }
};
struct DB_META
{
	string tableName;
	unsigned long tableSize;
	unsigned long rowNum;
	vector<string> columns; 
	vector<int> columnType;
};

struct DB_META_INFO
{
	unsigned int dbID;
	vector<DB_META> dbMetaData;
};

struct IMPORT_INFO
{
	unsigned int taskid;
	unsigned int dbID;
	string tableName;
	vector<string> colName;
	//map<string ,vector<string> >impTableInfo;
};
#endif
