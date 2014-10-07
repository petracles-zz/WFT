//Chris Kuffert
#include "Gear.h"


// GEAR GETTERS
#pragma region GEAR GETTERS

// Gets the type of the gear.
string Gear::getType()
{
	return type;
}

// Gets the attack Modifier.
double Gear::getAttMod()
{
	return attackMod;
}

// Gets the defense Modifier.
double Gear::getDefMod()
{
	return defenseMod;
}

// Gets the accuracy Modifier.
double Gear::getAccMod()
{
	return accMod;
}

// Gets the health Modifier.
double Gear::getHealthMod()
{
	return healthMod;
}

// Gets the move Modifier.
double Gear::getMoveMod()
{
	return moveMod;
}

// Gets the range Modifier.
double Gear::getRangeMod()
{
	return rangeMod;
}

#pragma endregion


// GEAR SETTERS
#pragma region GEAR SETTERS

//Sets the type of the Gear to the given value.
void Gear::setType(string newType)
{
	type = newType;
}

// Sets the attack Modifier to the given value.
void Gear::setAttMod(double newAtt)
{
	attackMod = newAtt;
}

// Sets the defense Modifier to the given value.
void Gear::setDefMod(double newDef)
{
	defenseMod = newDef;
}

// Sets the accuracy Modifier to the given value.
void Gear::setAccMod(double newAcc)
{
	accMod = newAcc;
}

// Sets the health Modifier to the given value.
void Gear::setHealthMod(double newHP)
{
	healthMod = newHP;
}

// Sets the move Modifier to the given value.
void Gear::setMoveMod(double newMove)
{
	moveMod = newMove;
}

// Sets the range Modifier to the given value.
void Gear::setRangeMod(double newRange)
{
	rangeMod = newRange;
}

#pragma endregion