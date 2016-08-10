#pragma once
#ifdef _WIN32
#include "stdafx.h"
#endif

#include <string>
#include <vector>

using namespace std;

/*
* Helper Class in charge of colors
*/
class Colors{
public:
	string ANSI_COLOR_BLACK = "\e[0;30m";
	string ANSI_COLOR_RED = "\x1b[31m";
	string ANSI_COLOR_GREEN = "\x1b[32m";
	string ANSI_COLOR_YELLOW = "\x1b[33m";
	string ANSI_COLOR_BLUE = "\x1b[34m";
	string ANSI_COLOR_MAGENTA = "\x1b[35m";
	string ANSI_COLOR_CYAN = "\x1b[36m";
	string ANSI_COLOR_DARK_GRAY = "\e[1;30m";
	string ANSI_COLOR_RESET = "\x1b[0m";
	vector <string> COLORS = { ANSI_COLOR_BLACK, ANSI_COLOR_RED, ANSI_COLOR_GREEN, ANSI_COLOR_YELLOW, ANSI_COLOR_BLUE, ANSI_COLOR_MAGENTA, ANSI_COLOR_CYAN, ANSI_COLOR_DARK_GRAY };
	int NUM_COLORS = COLORS.size();

	string getColor(int);
	string randColor();
	string resetColor();

	Colors();
	~Colors();
};

/*
* Class representing a unit in the Environment Square
*/
class EnvironmentSquare{
	public:
	int i;
	int j;
	string image;
	bool walkable;

	EnvironmentSquare(int ii, int jj);
	~EnvironmentSquare();
	void makeImage(string color, string img, string reset);
	virtual void makeRandomImage();
};

/*
 *~~~~~~~~~		LETHAL		~~~~~~~~~~~~
 */
class LethalSquare : public EnvironmentSquare{
	public:
		string HOLE  = " 🕳 ";
		string FLAME = " 🔥 ";
		string WATER = " 🌊 ";

		LethalSquare(int ii, int jj);
		~LethalSquare();
};
/*
 *~~~~~~~~~		WALKABLES		~~~~~~~~~
 */
class Walkable : public EnvironmentSquare{
	public:
		Walkable(int ii, int jj);
		~Walkable();
};
class Road : public Walkable{
	public:
		vector <string> ROADS = { " ═ ", " ║ ", " ╔ ", " ╗ ", " ╚ ", " ╝ ", " ╠ ",
			" ╣ ", " ╦ ", " ╩ ", " ╬ " };
		int NUM_ROADS = ROADS.size();

		Road(int ii, int jj);
		~Road();

};
/*
 *	~~~~~~~~~		GROUNDS (WALKABLES)		~~~~~~~~~
 */
class Ground : public Walkable
{
	public:
		vector <string> GROUNDS = { " ☙ ", " 🌱 ", " 🌾 ", " 🌿 ", " ☘ ", " 🍀 ", " 🍁 ", " 🍂 "};
		int NUM_GROUNDS = GROUNDS.size();
		Ground(int ii, int jj);
		~Ground();
};

class Flower: public Walkable{
	public:
		vector <string> FLOWERS = { " ⚘ ", " 💮 ", " 🌷 ", " 🌸 ", " 🌹 ", " 🌺 ", " 🌻 ", " 🌼 ", " 🎕 ", " 🏵 ", " 🏶 " };
		int NUM_FLOWERS = FLOWERS.size();

		Flower(int ii, int jj);
		~Flower();
};

/*
 *~~~~~~	ITEMS	(WALKABLES)~~~~~~
 */
class Item: public Walkable
{
	public:
		string PICKED_UP = " ⛶ ";
		bool pickedUp;

		Item(int ii, int jj);
		~Item();

		void pickUp();
		bool isPickedUp();

};
class Weapon : public Item
{
	public:
		string SICKLE       = " ☭ ";
		string HAMMER       = " 🔨 ";
		string SWORD        = " 🗡 ";
		string DUAL_SWORDS  = " ⚔ ";
		string PICK         = " ⛏ ";
		string MACHETE      = " 🔪 ";
		string CAESTUS      = " ✊ ";

		string STAFF_1      = " ⚕ ";
		string STAFF_2      = " ⚚ ";
		string STAFF_3      = " ☤ ";
		
		string SHIELD_HOLY  = " ⛨ ";
		string SHIELD_LIGHT = " ⛊ ";
		string SHIELD_DARK  = " ⛉ ";
		string SHIELD_GREAT = " 🛡 ";
		vector <string> WEAPONS{ SICKLE, HAMMER, SWORD, DUAL_SWORDS, PICK, CAESTUS, SHIELD_HOLY, SHIELD_LIGHT, SHIELD_DARK, SHIELD_GREAT};
		int NUM_WEAPONS = WEAPONS.size();
};

class Food : public Item
{
	public:
		//	Fruits
		string APPLE_RED   = " 🍎 ";
		string APPLE_GREEN = " 🍏 ";
		string TOMATO      = " 🍅 ";
		string TANGERINE   = " 🍊 ";
		string GRAPES      = " 🍇 ";
		string MELON       = " 🍈 ";
		string BANANA      = " 🍌 ";
		string LEMON       = " 🍋 ";
		string PINEAPPLE   = " 🍍 ";			
		string PEAR        = " 🍐 ";
		string PEACH       = " 🍑 ";
		string CHERRIES    = " 🍒 ";
		string STRAWBERRY  = " 🍓 ";
		string AUBERGINE   = " 🍆 ";
		//	Carbs
		string RICE        = " 🍙 ";
		string BREAD       = " 🍞 ";
		string POT_OF_FOOD = " 🍲 ";
		string POTATO      = " 🍠 ";
		string ODEN        = " 🍢 ";
		//	Nuts & Spices
		string CHESTNUT    = " 🌰 ";
		string MAIZE       = " 🌽 ";
		string PEPPER      = " 🌶 ";
		string MUSHROOM    = " 🍄 ";
		//	Meats
		string MEAT_ON_BONE = " 🍖 ";
		string POULTRY_LEG  = " 🍗 ";
		//	Drinks
		string WATER     = " ⛲ ";
		string WINE      = " 🍷 ";
		string TEA       = " 🍵 ";
		string SAKE      = " 🍶 ";
		string BEER      = " 🍺 ";

};

class FaithItem:public Item
{
	public:
	string CROSS_1       = " ☥ ";
	string CROSS_2       = " ☦ ";
	string CROSS_3       = " ☨ ";
	string CROSS_4       = " ☩ ";
	string STAR_CRESCENT = " ☪ ";
	string YIN_YANG      = " ☯ ";
	string PENTAGRAM     = " ⛧ ";

	FaithItem(int ii, int jj);
	~FaithItem();

};

/*
 *	~~~~~~~~~		NON-WALKABLES		~~~~~~~~~~~
 */
class NonWalkable : public EnvironmentSquare{
	public:
		NonWalkable(int ii, int jj);
		~NonWalkable();

};


class Castle:public NonWalkable{
	public:
	string CASTLE  = " 🏰 ";
	string TOWER_1 = " ♖ ";
	string TOWER_2 = " ♜ ";
	string CHURCH  = " ⛪ ";
	Castle(int ii, int jj);
	~Castle();
};

class Mountain :public NonWalkable{
	public:
		string MOUNTAIN_1 = " ⛰ ";
		string MOUNTAIN_2 = " 🏔 ";
		string MOUNTAIN_3 = " 🌋 ";

		Mountain(int ii, int jj);
		~Mountain();
};
class Tree : public NonWalkable{
	public:
		string TREE_PINE = " 🌲 ";
};
class Moon : public EnvironmentSquare{
	public:
		string MOON_NEW = " 🌑 ";
		string MOON_WAXING_CRESCENT = " 🌒 ";
		string MOON_FIRST_QUARTER = "  🌓 ";
		string MOON_WAXING_GIBBOUS = " 🌔 ";
		string MOON_FULL = " 🌕 ";
		string MOON_WANING_GIBBOUS = " 🌖 ";
		string MOON_LAST_QUARTER = " 🌗 	";
		string MOON_WANING_CRESCENT = " 🌘 ";
		string CRESCENT_MOON = " 🌙 ";


		Moon(int ii, int jj);
		~Moon();
};

class Cloud : public EnvironmentSquare
{
	public:
		string CLOUD_NORMAL       = " ☁ ";
		string CLOUD_THUNDER_RAIN = " ⛈ ";
		string CLOUD_LIGHTNING    = " 🌩 ";
		string CLOUD_TORNADO      = " 🌪 ";
		string CLOUD_SNOW		  = " 🌨 ";
		string CLOUD_RAIN         = " 🌧 ";
};

class Weather : public EnvironmentSquare
{
public:
	string RAIN = " ⛆ ";
	string SNOW = " ❄ ";
	string WIND = " 🍃 ";
	string FOG  = " 🌫 ";
	string WIND = " 🌬 ";
};

class Sun : public EnvironmentSquare{
public:
	//	Day Specific
	string SUN_CLOUD = " ⛅ ";
	string SUN_CLOUD_RAIN = " 🌦 ";
	string SUN_MOUNTAIN = " 🌄 ";
	string SUN_HILL = " 🌅 ";
	string SUN_1 = " ☼ ";
	string SUN_2 = " ☀ ";
	string RAINBOW = " 🌈 ";
	Sun(int ii, int jj);
	~Sun();
};
		
class Star : public EnvironmentSquare
{
public:
	//	Night Specific
	string STARS_1       = " 🌌 ";
	string STARS_2		 = " 🌠 ";
	string COMET         = " ☄ ";
	vector <string> STARS = { STARS_1, STARS_2, COMET };
	int NUM_STARS = STARS.size();
	Star(int ii, int jj);
	~Star();
};

class Sky
{
public:
	bool isCloudy;
	bool isRaining;
	bool isSnowing;
	bool isFoggy;

	bool isSunny;
	bool isDay;
	int skySize = 2;
	int length;

	vector<vector <EnvironmentSquare>> sky;
	Colors colors;

	Sky(int len, bool isCloudy, bool isRaining, bool isSnowing, bool isFoggy, bool isSunny, bool isDay);
	void generateSky();
	~Sky();
};

class EnvironmentGrid
{
private:
	vector<vector <EnvironmentSquare>> grid;
public:
	EnvironmentGrid();
	~EnvironmentGrid();
};

class EnvironmentManager{
public:
	EnvironmentManager();
	~EnvironmentManager();

};