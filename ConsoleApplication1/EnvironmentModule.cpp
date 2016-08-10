#pragma once
#ifdef _WIN32
#include "stdafx.h"
#endif
#include "EnvironmentModule.hpp"

/*
*Colors Manager Class
*/
Colors::Colors(){}
string Colors::getColor(int i){
	return COLORS[i];
}
string Colors::randColor(){
	return COLORS[rand() % NUM_COLORS];
}
string Colors::resetColor(){
	return ANSI_COLOR_RESET;
}
/*
 *Environment Unit Super Class
 *Represents a single unit on an environment grid
 */
EnvironmentSquare::EnvironmentSquare(int ii, int jj)
{
	i = ii;
	j = jj;
};
void EnvironmentSquare::makeImage(string color, string img, string reset){
	img = color + img + reset;
};

/*
 *~~~~~~~~		WALKABLES		~~~~~~~~
 */
Walkable::Walkable(int ii, int jj) : EnvironmentSquare(ii, jj)
{
	walkable = true;
};
Walkable::~Walkable(){};

Flower::Flower(int ii, int jj) : Walkable(ii, jj)
{
	image = FLOWERS[rand() % NUM_FLOWERS];
};
Flower::~Flower(){};

/*
 *	~~~~~~		ITEMS	(WALKABLES)	~~~~~~~~~
 */
Item::Item(int ii, int jj):Walkable(ii, jj){
	pickedUp = false;
}
Item::~Item(){};

void Item::pickUp()
{
	pickedUp = true;
	image = PICKED_UP;
};
bool Item::isPickedUp()
{
	return pickedUp;
};

NonWalkable::NonWalkable(int ii, int jj):EnvironmentSquare(ii, jj)
{
	walkable = false;

};

Sky::Sky(int len, bool cloudy, bool raining, bool snowing, bool foggy, bool sunny, bool day)
{
	length = len;
	isCloudy = cloudy;
	isRaining = raining;
	isSnowing = snowing;
	isFoggy = foggy;
	isSunny = sunny;
	isDay = day;

	sky.reserve(skySize);
	for (int i = 0; i < skySize; i++)
		sky[i].reserve(length);
};
void Sky::generateSky()
{		
	int j = rand() % length;
	int i = rand() % skySize;
	
	//	It's day
	//	Generate sun
	if (isDay)
	{
		Sun sun(i, j);
		if (isCloudy)//	Is it cloudy?
		{
			if (isRaining)//	Is it also raining?
			{
				sun.makeImage(colors.ANSI_COLOR_DARK_GRAY, sun.SUN_CLOUD_RAIN, colors.ANSI_COLOR_RESET);
			}
			else//	Just cloudy
			{
				sun.makeImage(colors.ANSI_COLOR_DARK_GRAY, sun.SUN_CLOUD, colors.ANSI_COLOR_RESET);
			}
		}
		else//	Overcast
		{

			sun.makeImage(colors.ANSI_COLOR_YELLOW, sun.SUN_2, colors.ANSI_COLOR_RESET);
		}
	}
	//	It's night
	//	Generate moon
	else
		Moon(i, j);
	{

	}
}
Sky::~Sky(){};
EnvironmentManager::EnvironmentManager(){
};