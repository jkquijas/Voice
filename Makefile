CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g $(shell root-config --cflags)
LDFLAGS=-g $(shell root-config --ldflags)
LDLIBS=$(shell root-config --libs)

SRCS=Voice.cpp TerminalManager.cpp AgentModule.cpp EnvironmentModule.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: voice

voice: $(OBJS)
		$(CXX) $(LDFLAGS) -o voice $(OBJS) $(LDLIBS) 

voice.o: Voice.cpp TerminalManager.hpp EnvironmentModule.hpp AgentModule.hpp
	
TerminalManager.o: TerminalManager.hpp TerminalManager.cpp

EnvironmentModule.o: EnvironmentModule.hpp EnvironmentModule.cpp

AgentModule.o: AgentModule.hpp AgentModule.cpp

clean:
		$(RM) $(OBJS)

dist-clean: clean
		$(RM) voice
