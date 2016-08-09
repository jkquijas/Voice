#include "stdafx.h"
#include "TerminalManager.h"
#include <iostream>
#include <vector>



TerminalManager::TerminalManager(std::vector<std::vector<char>> g)
{
	grid = g;
	playerX = 2;
	playerY = 2;
}


TerminalManager::~TerminalManager()
{
}

void TerminalManager::printTerminal(){
	for (int i = 0; i < gridSide; i++){
		for (int j = 0; j < gridSide; j++){
			if (i == playerX && j == playerY){
				std::cout << playerImage << " ";
			}
			else
			{
				std::cout <<  grid[i][j] << " ";
			}
			
		}
	std::cout << "\n";
	}
	std::cout << "\n";

	
}
