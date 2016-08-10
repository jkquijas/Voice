#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

#include "TerminalManager.hpp"

using namespace std;

TerminalManager::TerminalManager((vector<vector<string> >)* g, int size)
{
	grid = g;
	gridSize = size;
}


TerminalManager::~TerminalManager()
{
}

void TerminalManager::printTerminal(){
	for (int i = 0; i < gridSize; i++){
		for (int j = 0; j < gridSize; j++){
			 cout <<  *grid[i][j];
		}
		cout << "\n";
	}
	cout << "\n";
}
