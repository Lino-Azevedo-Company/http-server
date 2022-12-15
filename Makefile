CC = g++
CFLAGS = -Wall -g

all: main

main: main.o
	$(CC) $(CFLAGS) -o main main.o

main.o:
	$(CC) $(CFLAGS) -c src/main.cpp
