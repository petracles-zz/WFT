#pragma once
#include <string>

using namespace::std;

class Terrain {
private:
	string type;
	//Image terrainImage;
	int movementCost;
	int defenseBonus;
public:
	// GETTERS
	string getType();
	//Image getImage();
	int getCost();
	int getDefenseBonus();

	// SETTERS
	void setType(string);
	//void setImage(image);
	void setCost(int);
	void setDefenseBonus(int);
};