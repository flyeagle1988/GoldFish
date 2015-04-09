#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "DS/DGroupKey.h"
#include <string>
#include <map>
using namespace std;
class testCreateIndex
{
	public:
		testCreateIndex();
		~testCreateIndex();		
		int process();
		void setData(const MSG_RA_DS_IMPORT_TASK_ACK impTaskAck)
		{
			m_impTaskAck = impTaskAck;
		}
		
	private:
		MSG_RA_DS_IMPORT_TASK_ACK m_impTaskAck;
		
};

