//Arjun Rao
#include "Location.h";

// ITEM GETTERS:
#pragma region LOCATION GETTERS

// gets the X coordinate of the location.
int Location::getX()
{
	return x;
}

// gets the Y coordinate of the location.
int Location::getY()
{
	return y;
}
#pragma endregion

// ITEM SETTERS:
#pragma region LOCATION SETTERS

// sets the X coordinate of the location.
void Location::setX(int newX)
{
	x = newX;
}

// sets the Y coordinate of the location.
void Location::setY(int newY)
{
	y = newY;
}
#pragma endregion