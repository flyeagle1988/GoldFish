#ifndef PROTOCOL_H_
#define PROTOCOL_H_
/*Cmd Code*/
const unsigned int DC_DS_IMPORT_INFO_SEND = 0x01;
const unsigned int DS_DC_IMPORT_INFO_SEND_ACK = 0x02;

const unsigned int DC_DS_RA_INFO_SEND = 0x03;
const unsigned int DS_DC_RA_INFO_SEND_ACK = 0x04;

const unsigned int DC_RA_DATABASE_INFO_SEND = 0x05;
const unsigned int RA_DC_DATABASE_INFO_SEND_ACK = 0x06;

const unsigned int DC_RA_IMPORT_SIZE_INFO_GET = 0x07;
const unsigned int RA_DC_IMPORT_SIZE_INFO_GET_ACK = 0x08;

const unsigned int DS_CS_DATA_UPLOAD = 0x09;
const unsigned int CS_DS_DATA_UPLOAD_ACK = 0x0a;

const unsigned int DS_CS_DELTA_UPLOAD = 0x0b;
const unsigned int CS_DS_DELTA_DATA_INFO_SEND_ACK = 0x0c;

const unsigned int DS_DC_HEARTBEAT_SEND = 0x0d;
const unsigned int DC_DS_HEARTBEAT_SEND_ACK = 0x0e;

const unsigned int DS_DC_LOCATION_INDEX_SEND = 0x0f;
const unsigned int DC_DS_LOCATION_INDEX_SEND_ACK = 0x10;

const unsigned int DS_RA_IMPORT_TASK_SEND = 0x11;
const unsigned int RA_DS_IMPORT_ERROR_INFO_ACK = 0x12;
const unsigned int RA_DS_IMPORT_TASK_ACK = 0x13;

const unsigned int RA_DC_DELTA_DATA_INFO_SEND = 0x14;
const unsigned int DC_RA_DELTA_DATA_INFO_SEND_ACK = 0x15;

const unsigned int RA_DS_DELTA_DATA_SEND = 0x16;
const unsigned int DS_RA_DELTA_DATA_SEND_ACK = 0x17;


const unsigned int READ_METADATA = 1;
const unsigned int CREATE_TASK = 5;
const unsigned int IMPORT_DATA = 4;

const unsigned int WAIT_WORKITEM = 2;
const unsigned int FINISH = 3;

const unsigned int DS_IMP_STATE = 1;
const unsigned int DS_DELTA_STATE = 2;

/*Protobuf Error Code*/
const int PROTO_PARSE_ERROR = -40;
#endif
