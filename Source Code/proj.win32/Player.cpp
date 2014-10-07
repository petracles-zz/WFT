//Conor Golden
#include "Player.h";
#include "Unit.h";

// ITEM GETTERS:
#pragma region PLAYER GETTERS

// gets the name of the player
string Player::getName()
{
	return name;
}

// gets the total money that the player has
int Player::getTotalMoney()
{
	return totalMoney;
}
#pragma endregion

// ITEM SETTERS:
#pragma region PLAYER SETTERS

// sets the name to the given string.
void Player::setName(string newName)
{
	name = newName;
}

// sets the total money to this given amount
void Player::setTotalMoney(int amount)
{
	totalMoney = amount;
}

// add a unit to the roster
void Player::addUnitToRoster(Unit* newUnit) 
{
	roster.push_back(newUnit);
}

#pragma endregion