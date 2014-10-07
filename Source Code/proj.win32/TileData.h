#include "cocos2d.h"
#include "HelloWorldScene.h"

class TileData {
	HelloWorld theGame;
	BOOL selecetedForMovement;
	BOOL selectedForAttack;
	int movementCost;
	int hScore;
	int gScore;
	int fScore;
	std::string tileType;
};