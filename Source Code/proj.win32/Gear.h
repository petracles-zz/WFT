#pragma once
#include "item.h"

// The gear class is a subclass of Item. Each unit is equipped with gear,
// which can effect their stats and capabilities in combat.
class Gear : public Item
{
private:
	string type;        // Either a passive effect or an acivatable effect.
	double attackMod;   // The amount in which the Unit's attack stat is modified.
	double defenseMod;  // The amount in which the Unit's defense stat is modified.
	double accMod;      // The amount in which the Unit's accuracy stat is modified.
	double healthMod;   // The amount in which the Unit's health stat is modified.
	double moveMod;     // The amount in which the Unit's movement stat is modified.
	double rangeMod;    // The amount in which the Unit's range stat is modified.
public:
	void doNothingItem() { }     // Inherits the doNothing method from Item.
	virtual void doNothingGear() = 0;  // Allows Gear to be an abstract class. 

	// GETTERS
#pragma region GETTERS
	string getType();
	double getAttMod();
	double getDefMod();
	double getAccMod();
	double getHealthMod();
	double getMoveMod();
	double getRangeMod();
#pragma endregion

	// SETTERS
#pragma region SETTERS
	void setType(string);
	void setAttMod(double);
	void setDefMod(double);
	void setAccMod(double);
	void setHealthMod(double);
	void setMoveMod(double);
	void setRangeMod(double);
#pragma endregion
};

