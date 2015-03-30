INCLUDES = -I$(top_srcdir)/include -I$(top_srcdir)/include/protocol/DIS/ -I/usr/include/oracle/11.2/client64/ -I/usr/local/include/libxml2

bin_PROGRAMS = $(top_srcdir)/bin/DS
__top_srcdir__bin_DS_SOURCES = BitCompressedVector.cpp \
							   CLcreateIndexWorkItem.cpp \
							   CLHeartBeatTimer.cpp \
							   ColumnTable.cpp \
							   IndexOffset.cpp \
							   CLcreateDeltaTask.cpp  \
							   CLCSConnectAgent.cpp   \
						   	   CLimpTaskManager.cpp \
							   DRowTable.cpp   \
							   main.cpp      \
							   TableManager.cpp  \
							   CLcreateIndexTask.cpp  \
							   CLDCConnectAgent.cpp   \
						   	   CLRAConnectAgent.cpp  \
						 	   DSXmlParse.cpp
__top_srcdir__bin_DS_LDADD = $(top_srcdir)/lib/libcommon.la $(top_srcdir)/lib/libprotocol.la -L/usr/lib/oracle/11.2/client64/lib/ -lclntsh -locci -lxml2

