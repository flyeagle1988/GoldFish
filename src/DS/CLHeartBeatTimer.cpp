#include "DS/CLHeartBeatTimer.h"
#include "DS/CLDCConnectAgent.h"
#include "common/DevLog/DevLog.h"
#include "common/comm/BaseHeader.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_DC_HEARTBEAT_SEND.pb.h"

extern CLDCConnectAgent *g_pDCConnectAgent;
extern DevLog * g_pDevLog;
CLHeartBeatTimer::CLHeartBeatTimer(unsigned int timeLen,long prio):Timer(timeLen, prio),m_retryNo(3)
{
}

CLHeartBeatTimer::~CLHeartBeatTimer()
{
}

int CLHeartBeatTimer::doAction(void)
{
	if(m_retryNo)
	{
		MsgHeader msgHeader;
		msgHeader.cmd = DS_DC_HEARTBEAT_SEND;

		MSG_DS_DC_HEARTBEAT_SEND heartBeat;
		heartBeat.set_cpu(1);
		heartBeat.set_memory(1);
		string sendData;
		heartBeat.SerializeToString(&sendData);

		g_pDCConnectAgent->sendPackage(msgHeader, sendData.c_str());
		updateExpiredTime(HEART_OVERTIME);
		m_retryNo--;
	}
	else
	{
		DEV_LOG_ERROR("CLHeartBeatTimer::doAction: not receive heart beat!");
		return FAILED;
	}
	
	return SUCCESSFUL;
}
