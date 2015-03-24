#include "DS/CLcreateIndexWorkItem.h"
#include "common/DevLog/DevLog.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "DS/DGroupKey.h"

extern DevLog * g_pDevLog;
extern CLDCConnectAgent * g_pDCConnectAgent;
CLcreateIndexWorkItem::CLcreateIndexWorkItem():m_data("")
{
}

CLcreateIndexWorkItem::~CLcreateIndexWorkItem()
{
}

int CLcreateIndexWorkItem::process()
{
	MSG_RA_DS_IMPORT_TASK_ACK impTaskAck;
	typedef map<string , multimap<string , uint64_t > > StrMap;
	typedef map<string, multimap<int , uint64_t > > IntMap;
	typedef map<string, multimap<float , uint64_t > > FloatMap;
	typedef map<string, multimap<double, uint64_t > > DoubleMap;
	StrMap strMap;
	IntMap iMap;
	FloatMap fMap;
	DoubleMap dMap;
	if(!impTaskAck.ParseFromString(getData()))
	{
		DEV_LOG_ERROR("CLcreateIndexWorkItem::process parse from string error!");
		return FAILED;
	}
	else
	{
		for(int i = 0; i < impTaskAck.colvalue_size(); ++i)
		{
			const COL_DATA & colData = impTaskAck.colvalue(i);
			switch(colData.coltype())
			{
				case COL_DATA_COLUMN_TYPE_STRING:
				{
					multimap<string , uint64_t> strMultiMap;
					for(int j = 0; j < colData.colvalue_size(); j++)
					{
						const COL_VALUE & colValue = colData.colvalue(j);
						strMultiMap.insert(make_pair(colValue.strvalue(), colValue.rowno()));
					}
					strMap.insert(make_pair(colData.colname(), strMultiMap));
					break;
				}
				case COL_DATA_COLUMN_TYPE_INT:
				{
					multimap<int , uint64_t> iMultiMap;
					for(int j = 0; j < colData.colvalue_size(); j++)
					{
						const COL_VALUE & colValue = colData.colvalue(j);
						iMultiMap.insert(make_pair(colValue.ivalue(), colValue.rowno()));
					}
					iMap.insert(make_pair(colData.colname(), iMultiMap));
					break;
				}
				case COL_DATA_COLUMN_TYPE_FLOAT:
				{
					multimap<float , uint64_t> fMultiMap;
					for(int j = 0; j < colData.colvalue_size(); j++)
					{
						const COL_VALUE & colValue = colData.colvalue(j);
						fMultiMap.insert(make_pair(colValue.ivalue(), colValue.rowno()));
					}
					fMap.insert(make_pair(colData.colname(), fMultiMap));
					break;
				}
				case COL_DATA_COLUMN_TYPE_DOUBLE:
				{
					multimap<double, uint64_t> dMultiMap;
					for(int j = 0; j < colData.colvalue_size(); j++)
					{
						const COL_VALUE & colValue = colData.colvalue(j);
						dMultiMap.insert(make_pair(colValue.ivalue(), colValue.rowno()));
					}
					dMap.insert(make_pair(colData.colname(), dMultiMap));
					break;
				}
				
			}
		}
	for(StrMap::iterator it = strMap.begin(); it != strMap.end(); it++)
	{
		DGroupKey<string> * column = constructDGroupKey(it->first,uint64_t itemCount,uint64_t base,uint64_t type,multimap < string,uint64_t > initMap);
	}
		
	}
	return SUCCESSFUL;
}
