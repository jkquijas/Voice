#pragma once
#include <stdio.h>
#include <vector>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

class TerminalManager
{
public:
	int gridSide = 5;
	char playerImage = '8';
	int playerX;
	int playerY;
	std::vector<std::vector<char>> grid;
	TerminalManager(std::vector<std::vector<char>> g);
	~TerminalManager();
	void printTerminal();
};

