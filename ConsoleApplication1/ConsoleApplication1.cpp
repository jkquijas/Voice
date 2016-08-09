// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "TerminalManager.h"
#include <vector>
using namespace std;

int main(int argc, _TCHAR* argv[])
{
	int gridSize = 5;
	std::vector<std::vector<char>> grid(gridSize);
	for (int i = 0; i < gridSize; i++){
		grid[i] = vector<char>(gridSize);
		for (int j = 0; j < gridSize; j++){
			grid[i][j] = '\'';
		}
	}

	TerminalManager tm(grid);
	tm.printTerminal();

	getchar();
	return 0;
}

