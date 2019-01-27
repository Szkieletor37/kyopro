CC = g++
CFLAGS = -Wall -g
objs := $(wildcard *.cpp)
targets:=$(objs:.cpp= )

.PHONY:all
	
all: $(targets)
.cpp:
	$(CC) $(CFLAGS) -std=c++11 -o $@ $<

