INCLUDES = -I$(top_srcdir)/include -I/usr/local/include/libxml2 -I/home/oracle/liulu/trunk/test/gtest -I/usr/include/oracle/11.2/client64/
bin_PROGRAMS = createIndexTest
createIndexTest_SOURCES = testMain.cpp \
				  TestCreateIndex.cpp \
					testCreateIndexWorkItem.cpp \
					../../src/DS/IndexOffset.cpp \
					../../src/DS/BitCompressedVector.cpp 
createIndexTest_LDADD = $(top_srcdir)/lib/libcommon.la  $(top_srcdir)/lib/libprotocol.la /home/oracle/liulu/trunk/test/gtest/libgtest.a -lxml2 -lpthread -L/usr/lib/oracle/11.2/client64/lib/ -lclntsh -locci 

