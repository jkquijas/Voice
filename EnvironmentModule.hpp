

using namespace std;

/*
 * Helper Class in charge of colors
 */
class Colors{
	public:
	string ANSI_COLOR_BLACK   = "\e[0;30m";
	string ANSI_COLOR_RED     = "\x1b[31m";
	string ANSI_COLOR_GREEN   = "\x1b[32m";
	string ANSI_COLOR_YELLOW  = "\x1b[33m";
	string ANSI_COLOR_BLUE    = "\x1b[34m";
	string ANSI_COLOR_MAGENTA = "\x1b[35m";
	string ANSI_COLOR_CYAN    = "\x1b[36m";
	string ANSI_COLOR_DARK_GRAY = "\e[1;30m";
	string ANSI_COLOR_RESET   = "\x1b[0m";
	vector <string> COLORS = {ANSI_COLOR_BLACK, ANSI_COLOR_RED, ANSI_COLOR_GREEN, ANSI_COLOR_YELLOW, ANSI_COLOR_BLUE, ANSI_COLOR_MAGENTA, ANSI_COLOR_CYAN, ANSI_COLOR_DARK_GRAY};
	int NUM_COLORS = 8;
	
	string randomColor(int);
	Colors();
	~Colors();
}

/*
 * Class representing a unit in the Environment Square
 */
class EnvironmentSquare{
	public:
	int i;
	int j;
	string image;
	
	EnvironmentSquare(int ii, int jj, string img);
	~EnvironmentSquare();
};



class EnvironmentGrid{
	private:
	vector<vector <EnvironmentSquare>> grid;
	public:
	EnvironmentGrid
};

class EnvironmentFlower{
	public:
	vector <string> FLOWERS = {" ⚘ ", " 💮 ", " 🌷 ", " 🌸 ", " 🌹 ", " 🌺 ", " 🌻 ", " 🌼 ", " 🎕 ", " 🏵 ", " 🏶 "};
	int NUM_FLOWERS = 11;
	
}

class EnvironmentWeapons{
	public:
	string SWORD  = ANSI_COLOR_DARK_GRAY + " 🗡 " + ANSI_COLOR_RESET;
	string SHIELD = ANSI_COLOR_DARK_GRAY + " ⛨ " + ANSI_COLOR_RESET;
}

class EnvironmentFaith{
	public:
	string SUN = ANSI_COLOR_YELLOW + " ☀ " + ANSI_COLOR_RESET;
	
}

class EnvironmentCastle{
	string CASTLE = ANSI_COLOR_DARK_GRAY + " 🏰 " + ANSI_COLOR_RESET;
	string TOWER  = ANSI_COLOR_DARK_GRAY + " ♖ " + ANSI_COLOR_RESET;
}

class EnvironmentManager{
	public:
	string FIRE   = " 🔥 ";
	string VOLCANO = " 🌋 ";
	string WATER  = " 🌊 ";
	
	//	Green
	string TREE     = " 🌲 ";
	string GRASS    =  "";
	string FLOWER_1 = " 🌷 ";
	string FLOWER_2 = " ⚘ ";
		
	//	Snow
	string SNOW_MOUNTAIN = " 🏔 ";
	string SNOW = " ❄ ";
	
	
	
	EnvironmentManager();
	EnvironmentSquare(int, int, string);
	~EnvironmentManager();
	
	
}