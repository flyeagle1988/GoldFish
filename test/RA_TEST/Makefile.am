INCLUDES = -I$(top_srcdir)/include  -I/usr/local/include/libxml2 -I/home/oracle/liulu/trunk/test/gtest

bin_PROGRAMS = xmlTest
xmlTest_SOURCES = testMain.cpp \
				xmlTest.cpp \
				../../src/RA/raXmlParse.cpp
xmlTest_LDADD = $(top_srcdir)/lib/libcommon.la /home/oracle/liulu/trunk/test/gtest/libgtest.a -lxml2 -lpthread

