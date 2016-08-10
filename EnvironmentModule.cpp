#include "EnvironmentModule.hpp"

/*
 *Colors
 */
Colors::Colors(){}
string Colors::getColor(int i){
	return COLORS[i];
}

EnvironmentManager::EnvironmentManager{
	
}

EnvironmentSquare::EnvironmentSquare(int ii, int jj, string img){
	i = ii;
	j = jj;
	image = img;
}

EnvironmentWalkable::EnvironmentWalkable(int ii, int jj, string img):EnvironmentSquare(ii, jj, img)
{
	walkable = true;
}
EnvironmentWalkable::~EnvironmentWalkable(){
}

EnvironmentWalkable::EnvironmentWalkable(){
	walkable = true;
}
EnvironmentWalkable::~EnvironmentWalkable(){
}
