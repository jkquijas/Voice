// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#pragma once
#ifdef _WIN32
#include "stdafx.h"
#endif

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

#include "TerminalManager.hpp"
#include "AgentModule.hpp"
#include "EnvironmentModule.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Agent agent();
	EnvironmentManager environmentManager();
	Game game(agent, environmentManager);

	return 0;
}
