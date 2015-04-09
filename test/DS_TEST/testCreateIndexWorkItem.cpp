#include <gtest/gtest.h>
#include <iostream>
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
//#include "protocol/protocol.h"
#include "TestCreateIndex.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/DIS/MSG_DS_DC_RESOURCE_GET.pb.h"
#include "protocol/DIS/MSG_DS_DC_RTABLE_POSITION_GET.pb.h"
#include <fstream>

using namespace std;
DevLog * g_pDevLog;
TEST(testCreateIndex,process)
{
	string LogFileName = "../../log/DS.log";
    g_pDevLog = new DevLog(LogFileName.c_str());
    if(g_pDevLog->init() < 0)
    {
       cout << "main: DevLog init Error" << endl;
    }

	MSG_RA_DS_IMPORT_TASK_ACK importTaskAck;
	importTaskAck.set_dbid(1);
	importTaskAck.set_taskid(1);
	importTaskAck.set_tablename("TEST");
	importTaskAck.set_subtaskno(1);
	importTaskAck.set_subtasknum(1);
	
	ifstream inputFile("./uldrdata.1.txt");
	string word;
	uint32_t i = 1;
	COL_DATA * colData = importTaskAck.add_coldata();
	colData->set_coltype(COL_DATA_COLUMN_TYPE_STRING);
	colData->set_colname("NAME");
	while(inputFile >> word)
	{
		COL_VALUE * colValue = colData->add_colvalue();
		colValue->set_strvalue(word);
		colValue->set_rowno(i);
		i++;
	}
	cout << colData->colvalue_size() << endl;
	i = 1;
	ifstream inputFile2("./uldrdata.4.txt");
	COL_DATA * colData2 = importTaskAck.add_coldata();
	colData2->set_coltype(COL_DATA_COLUMN_TYPE_STRING);
	colData2->set_colname("ADDRESS");

	while(inputFile2 >> word)
	{
		COL_VALUE * colValue = colData2->add_colvalue();
		colValue->set_strvalue(word);
		colValue->set_rowno(i);
		i++;
	}
	cout << colData2->colvalue_size() << endl;
	testCreateIndex * pTestCI = new testCreateIndex();
	pTestCI->setData(importTaskAck);
	int ret = pTestCI->process();
	ASSERT_TRUE(ret == 0);	
}
