
# Makefile for f2022, ecs36b
# https://macappstore.org/libjson-rpc-cpp/
# https://github.com/cinemast/libjson-rpc-cpp

CC = g++ -std=c++14
CLANG_ROOT = /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain
CLINC = -I./hack_clang -I$(CLANG_ROOT)/usr/include/c++/v1
CFLAGS = -g

# LDFLAGS = 	-L/Users/sfwu/vcpkg/installed/arm64-osx/lib -ljsoncpp -L/opt/homebrew/lib/ -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -ljsonrpccpp-client -lcurl

LDFLAGS = 	-ljsoncpp -L/opt/homebrew/lib/ -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -ljsonrpccpp-client -lcurl

INC_CL	=	GPS.h Network.h Thing.h IOT_Thing.h Core.h Another_Thing.h
OBJ	=	GPS.o Network.o Thing.o IOT_Thing.o Core.o

# rules.
all: 	memory_layout_test_01

#
#
# <target> : [... tab...] <dependency>
# [... tab ....] <action>

IOT_Thing_layout:	ml_IOT_Thing.cpp
	g++ -cc1 -std=c++14 -fdump-record-layouts $(CLINC) -D_HACK_CLANG_ ml_IOT_Thing.cpp > ml_IOT_Thing.txt

IOT_Another_layout:	ml_IOT_Thing.cpp
	g++ -cc1 -std=c++14 -fdump-record-layouts $(CLINC) -D_HACK_CLANG_ -D_VIRTUAL_THINGS_ ml_IOT_Thing.cpp > ml_IOT_Another.txt

GPS.o:		GPS.cpp GPS.h $(INC_CL)
	$(CC) -c $(CFLAGS) GPS.cpp

Core.o:		Core.cpp Core.h $(INC_CL)
	$(CC) -c $(CFLAGS) Core.cpp

Network.o:	Network.cpp Network.h $(INC_CL)
	$(CC) -c $(CFLAGS) Network.cpp

Thing.o:	Thing.cpp Thing.h $(INC_CL)
	$(CC) -c $(CFLAGS) Thing.cpp

IOT_Thing.o:	IOT_Thing.cpp $(INC_CL)
	$(CC) -c $(CFLAGS) IOT_Thing.cpp

ml_IOT_Thing.o:	ml_IOT_Thing.cpp $(INC_CL)
	$(CC) -c $(CFLAGS) ml_IOT_Thing.cpp

memory_layout_test_01:	ml_IOT_Thing.o $(OBJ)
	$(CC) -o memory_layout_test_01 ml_IOT_Thing.o $(OBJ) $(LDFLAGS)

clean:
	rm -f *.o *~ core memory_layout_test_01


