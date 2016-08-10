#pragma once
#ifdef _WIN32
#include "stdafx.h"
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>


using namespace std;

class TerminalManager
{
public:
	(vector<vector<string> >) *grid;
	int gridSize;

	TerminalManager(vector <vector<string> > *g, int s);
	~TerminalManager();
	void printTerminal();
};
