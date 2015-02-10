INCLUDES = -I$(top_srcdir)/include -I$(top_srcdir)/include/protocol/DIS/ -I/usr/include/oracle/11.2/client64/ -I/usr/local/include/libxml2

bin_PROGRAMS = $(top_srcdir)/bin/RA
__top_srcdir__bin_RA_SOURCES = main.cpp \
							   CLDBManager.cpp \
							   CLDSAgent.cpp \
							   CLgetMetaWorkItem.cpp \
							   CLreadDBWorkItem.cpp \
							   raXmlParse.cpp \
							   CLDCAgent.cpp \
							   CLgetMetaDataTask.cpp \
							   CLimportTask.cpp
__top_srcdir__bin_RA_LDADD = $(top_srcdir)/lib/libcommon.la $(top_srcdir)/lib/libprotocol.la -L/usr/lib/oracle/11.2/client64/lib/ -lclntsh -locci -lxml2

