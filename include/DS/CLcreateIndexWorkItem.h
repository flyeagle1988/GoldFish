#ifndef CL_CREATE_INDEX_WORKITEM_H_
#define CL_CREATE_INDEX_WORKITEM_H_

#include "common/sys/ThreadPoolWorkItem.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/DIS/MSG_DS_CS_RAW_DATA_SEND.pb.h"
#include "DS/DGroupKey.h"
#include <string>
#include <map>
using namespace std;
class CLcreateIndexWorkItem:public ThreadPoolWorkItem
{
	public:
		CLcreateIndexWorkItem();
		~CLcreateIndexWorkItem();		
		int process();
		void setData(const MSG_RA_DS_IMPORT_TASK_ACK impTaskAck)
		{
			m_impTaskAck = impTaskAck;
		}
		
	private:
		MSG_RA_DS_IMPORT_TASK_ACK m_impTaskAck;
		
};
#endif
