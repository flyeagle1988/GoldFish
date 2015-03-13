#include "DS/CLHeartBeatTimer.h"
#include "DS/CLDCConnectAgent.h"
#include "common/comm/BaseHeader.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_DC_HEARTBEAT_SEND.pb.h"

extern CLDCConnectAgent *g_pDCConnectAgent;
CLHeartBeatTimer::CLHeartBeatTimer(unsigned int timeLen,long prio):
				Timer(timeLen, prio)
{
}

CLHeartBeatTimer::~CLHeartBeatTimer()
{
}

int CLHeartBeatTimer::doAction(void)
{
	MsgHeader msgHeader;
	msgHeader.cmd = DS_DC_HEARTBEAT_SEND;

	MSG_DS_DC_HEARTBEAT_SEND heartBeat;
	heartBeat.set_cpu(1);
	heartBeat.set_memory(1);
	string sendData;
	heartBeat.SerializeToString(&sendData);

	g_pDCConnectAgent->sendPackage(msgHeader, sendData.c_str());
	return SUCCESSFUL;
	
}