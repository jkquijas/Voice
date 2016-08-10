// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include "TerminalManager.hpp"
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
	int gridSize = 5;
	std::vector<std::vector<std::string> > grid(gridSize);
	for (int i = 0; i < gridSize; i++){
		grid[i] = vector<std::string>(gridSize);
		for (int j = 0; j < gridSize; j++){
			grid[i][j] = "🔥";
			//grid[i][j] = 
			//cout << "\u0444";
		}
	}

	TerminalManager tm(grid);
	tm.printTerminal();

	//getchar();
	return 0;
}

