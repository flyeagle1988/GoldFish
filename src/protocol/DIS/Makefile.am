INCLUDES=-I$(top_srcdir)/include -I$(top_srcdir)/include/protocol/DIS
noinst_LTLIBRARIES=$(top_srcdir)/lib/libprotocol.la
SUBDIRS=
BUILT_SOURCES=$(PROTOOUTPUT)
nodist___top_srcdir__lib_libprotocol_la_SOURCES=$(PROTOOUTPUT) 

PROTOOUTPUT=common.pb.h \
						common.pb.cc \
						MSG_CS_DC_RTABLE_POSITION_GET.pb.h \
						MSG_DS_CS_RAW_DATA_SEND.pb.h \
						MSG_DS_DC_RTABLE_POSITION_GET.pb.h \
						MSG_DC_DS_IMPORT_INFO_SEND.pb.h     \
						MSG_DS_CS_RTABLE_SEND.pb.h   \
						MSG_DS_RA_DELTA_GET.pb.h			\
						MSG_DC_DS_RA_INFO_SEND.pb.h  \
						MSG_DS_CS_XVECTORS_SEND.pb.h \
						MSG_DS_RA_IMPORT_TASK_SEND.pb.h  \
						MSG_CS_DC_LOCATION_INDEX_SEND.pb.h \
						MSG_DC_RA_DATABASE_INFO_GET.pb.h    \
						MSG_DS_DC_HEARTBEAT_SEND.pb.h \
						MSG_RA_DC_DELTA_DATA_INFO_SEND.pb.h \
						MSG_CS_DS_ROW_INDEX_SEND.pb.h  \
						MSG_DC_RA_IMPORT_SIZE_INFO_GET.pb.h \
						MSG_DS_DC_RESOURCE_GET.pb.h			\
						MSG_CS_DC_RTABLE_POSITION_GET.pb.cc \
						MSG_DS_CS_RAW_DATA_SEND.pb.cc \
						MSG_DS_DC_RTABLE_POSITION_GET.pb.cc \
						MSG_DC_DS_IMPORT_INFO_SEND.pb.cc     \
						MSG_DS_CS_RTABLE_SEND.pb.cc   \
						MSG_DS_RA_DELTA_GET.pb.cc			\
						MSG_DC_DS_RA_INFO_SEND.pb.cc  \
						MSG_DS_CS_XVECTORS_SEND.pb.cc \
						MSG_DS_RA_IMPORT_TASK_SEND.pb.cc  \
						MSG_CS_DC_LOCATION_INDEX_SEND.pb.cc \
						MSG_DC_RA_DATABASE_INFO_GET.pb.cc    \
						MSG_DS_DC_HEARTBEAT_SEND.pb.cc \
						MSG_RA_DC_DELTA_DATA_INFO_SEND.pb.cc \
						MSG_CS_DS_ROW_INDEX_SEND.pb.cc  \
						MSG_DC_RA_IMPORT_SIZE_INFO_GET.pb.cc \
						MSG_DS_DC_RESOURCE_GET.pb.cc
PROTOINPUT=	common.proto   \
						MSG_CS_DC_RTABLE_POSITION_GET.proto \
						MSG_DS_CS_RAW_DATA_SEND.proto \
						MSG_DS_DC_RTABLE_POSITION_GET.proto \
						MSG_DC_DS_IMPORT_INFO_SEND.proto     \
						MSG_DS_CS_RTABLE_SEND.proto   \
						MSG_DS_RA_DELTA_GET.proto			\
						MSG_DC_DS_RA_INFO_SEND.proto  \
						MSG_DS_CS_XVECTORS_SEND.proto \
						MSG_DS_RA_IMPORT_TASK_SEND.proto  \
						MSG_CS_DC_LOCATION_INDEX_SEND.proto \
						MSG_DC_RA_DATABASE_INFO_GET.proto    \
						MSG_DS_DC_HEARTBEAT_SEND.proto \
						MSG_RA_DC_DELTA_DATA_INFO_SEND.proto \
						MSG_CS_DS_ROW_INDEX_SEND.proto  \
						MSG_DC_RA_IMPORT_SIZE_INFO_GET.proto \
						MSG_DS_DC_RESOURCE_GET.proto
EXTRA_DIST=$(PROTOINPUT)

PROTODIR=$(top_srcdir)/src/protocol/DIS

$(PROTOOUTPUT):$(PROTOINPUT)
		protoc -I$(PROTODIR) --cpp_out=$(PROTODIR) $^
		mv $(PROTODIR)/*.pb.h $(top_srcdir)/include/protocol/DIS

clean:
		-rm -f $(top_srcdir)/include/protocol/DIS/*.pb.h
		-rm -f $(PROTODIR)/*.pb.cc
		-rm -f *.lo
		-rm -f *.o

distclean: clean
		-rm -f Makefile

