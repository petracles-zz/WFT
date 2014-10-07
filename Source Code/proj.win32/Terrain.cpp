//Conor Golden
#include "Terrain.h" ;

// ITEM GETTERS:
#pragma region TERRAIN GETTERS

// gets the type of the terrain
string Terrain::getType()
{
	return type;
}

// gets the image of the item.
//image Item::getImage()
//{ return itemImage; }

// gets the movement cost of the terrain type
int Terrain::getCost()
{
	return movementCost;
}

// gets the defense bonus of the terrain type
int Terrain::getDefenseBonus()
{
	return defenseBonus;
}
#pragma endregion

// ITEM SETTERS:
#pragma region TERRAIN SETTERS

// sets the type of the terrain
void Terrain::setType(string newType)
{
	type = newType;
}

// sets the image to the given image.
//void Item::setImage(image image)
//{ image = image; }

// sets the movement cost of the terrain
void Terrain::setCost(int newCost)
{
	movementCost = newCost;
}

// sets the defensive bonus of the terrain type
void Terrain::setDefenseBonus(int newBonus)
{
	defenseBonus = newBonus;
}
#pragma endregion