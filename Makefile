CC = g++
CFLAGS = -Wall -g

all: main

main: 
	$(CC) $(CFLAGS) src/main.cpp src/log/serverLogger.cpp src/log/serverLogger.hpp -o main