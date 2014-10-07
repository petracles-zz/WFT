//Chris Kuffert
#include "Weapon.h"
#include "cocos2d.h"

// Repairs the current weapon, replenishing its uses.
void Weapon::repairWeapon()
{
	remainingUses = totalUses;
}

// WEAPON GETTERS:
#pragma region WEAPON GETTERS

// Gets the weapons accuracy
double Weapon::getAccuracy()
{
	return accuracy;
}

// Gets the weapons power
int Weapon::getPower()
{
	return power;
}

// Gets the weapons rangeCOE
int Weapon::getRangeCOE()
{
	return rangeCOE;
}

// Gets the weapons remaingUses
int Weapon::getRemainingUses()
{
	return remainingUses;
}

// Gets the weapons totalUses
int Weapon::getTotalUses()
{
	return totalUses;
}
#pragma endregion

// WEAPON SETTERS:
#pragma region WEAPON SETTERS

// Sets the weapons Accuracy to the given value.
void Weapon::setAccuracy(double newAcc)
{
	accuracy = newAcc;
}

// Sets the weapons Power to the given value.
void Weapon::setPower(int newPow)
{
	power = newPow;
}

// Sets the weapons rangeCOE to the given value.
void Weapon::setRangeCOE(int newCOE)
{
	rangeCOE = newCOE;
}

// Sets the weapons remainingUses to the given value.
void Weapon::setRemainingUses(int newRem)
{
	remainingUses = newRem;
}

// Sets the weapns totalUses to the given value.
void Weapon::setTotalUses(int newTot)
{
	totalUses = newTot;
}

#pragma endregion


