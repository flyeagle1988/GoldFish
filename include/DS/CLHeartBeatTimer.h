#ifndef CL_HEARTBEAT_TIMER_H_
#define CL_HEARTBEAT_TIMER_H_
#include "common/Timer/Timer.h"

class CLHeartBeatTimer:public Timer
{
	public:
		CLHeartBeatTimer(unsigned int timeLen, long prio);
		~CLHeartBeatTimer();
		int doAction(void);
	private:
		
};
#endif
