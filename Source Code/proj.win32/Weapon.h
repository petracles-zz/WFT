#pragma once
#include "item.h"

// Weapon class is a subclass of Item. These are the weapons 
// a unit will be holding and engaging in combat with.
class Weapon : public Item
{
private:
	double accuracy;      // accuracy of the weapon (between 0.00 and 1.00)
	int power;            // Damage potential of the weapon
	int rangeCOE;      // The range coefficient of the weapon (between 0.00 and 1.00)
	int remainingUses;    // The number of remaining uses for this weapon.
	int totalUses;        // The total number of uses of this weapon.
public:
	void repairWeapon();

	// GETTERS
#pragma region GETTERS
	double getAccuracy();
	int getPower();
	int getRangeCOE();
	int getRemainingUses();
	int getTotalUses();
#pragma endregion

	// SETTERS
#pragma region SETTERS
	void setAccuracy(double);
	void setPower(int);
	void setRangeCOE(int);
	void setRemainingUses(int);
	void setTotalUses(int);
#pragma endregion



};

