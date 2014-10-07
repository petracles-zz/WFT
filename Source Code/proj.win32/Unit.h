#pragma once 
#include <string>
#include "Gear.h";
#include "Weapon.h";
#include "Item.h";
#include "Location.h";

using namespace std;
#include <vector>

// Unit class
class Unit
{
#pragma region FIELDS
private:
	// Hitpoints.
	int HP;

	// Location: 
	Location* loc;

	// Distance able to travel on grid.
	int speed;

	// Name.
	string nameFirst;
	string nameLast;

	// 0 = primary, 1 = secondary.
	int activeWeap;

	// Weapon names.
	Weapon * primary;
	Weapon * secondary;

	// Gear names.
	Gear * gear1;
	Gear * gear2;

	// Aim determinant. Higher aim is more precise.
	double aim;

	// UNIT moral determinant. Higher moral means more "efficient" soliders (i.e. the
	// UNIT is more accurate, takes damage better, etc.)
	int morale;

	// Salary of that UNIT. Able to spend UNIT-s salary to upgrade that UNIT.
	double salary;

	// set of images for the UNIT.
	//vector<Image> imageset;

	// Alive or Dead
	bool isAlive;

	// Ammo count on primary (only! unlimited secondary ammo).
	int ammo;

	bool isSelected;

	// UNIT location on board.
	// Location loc
#pragma endregion

public:
	// Constructors:
	Unit();
#pragma region GETTERS

	// getters:

	// Gets the units HP
	int getHP();

	// Gets the units location
	Location* getLoc();

	// Gets the units Speed
	int getSpeed();

	// Gets the units first name
	string getFirstName();

	// Gets the units first name
	string getLastName();

	// Gets the active weapon
	int getActive();

	// Gets the primary weapon
	Weapon * getPrimary();

	// Gets the secondary weapon
	Weapon * getSecondary();

	// Gets gear1
	Gear* getGear1();

	// Gets gear2
	Gear* getGear2();

	// Gets aim
	double getAim();
	
	// Gets morale
	int getMorale();

	// Gets salary
	double getSalary();

	// Gets imageset
	//vector<images> getImageset();

	// Gets isAlive
	bool getIsAlive();

	// Gets ammo
	int getAmmo();

	bool getIsSelected();
#pragma endregion

#pragma region SETTERS
	// setters:

	// sets the units HP
	void setHP(int hp);

	// sets the units location 
	void setLoc(Location* loc);

	// sets the units Speed
	void setSpeed(int speed);

	// sets the units first name
	void setFirstName(string name);

	// sets the units first name
	void setLastName(string name);

	// sets the active weapon
	void setActive(int activenum);

	// sets the primary weapon
	void setPrimary(Weapon * prim);

	// sets the secondary weapon
	void setSecondary(Weapon * sec);

	// sets gear1
	void setGear1(Gear* gear);

	// sets gear2
	void setGear2(Gear* gear);

	// sets aim
	void setAim(double aim);

	// sets morale
	void setMorale(int morale);

	// sets salary
	void setSalary(double sal);

	// sets imageset
	//void setImageset(vector<image> images);

	// sets isAlive
	void setIsAlive(bool alive);

	// sets ammo
	void setAmmo(int ammo);

	void setIsSelected(bool selected);
#pragma endregion 

#pragma region OTHER METHODS
	// Methods:
	void moveTo(Location* loc);
	void attack(Unit* that);
	void pathFinding();
	void scanGrid();

	// Generates a random health value. 10-20
	int healthGen() {
		return ((rand() %10) + 10);
	}

	// Generates a random speed value. 5-9
	int speedGen() {
		return ((rand() %5) + 4);
	}

	//  Generates a random aim value. .4 - .6
	double aimGen() {
		return (((rand() % 2) + 4) / 10);
	}

	// Generates a random First name. 
	string randFirst() {
		return "no first names yet";
	}

	// Generates a random Last name.
	string randLast() {
		return "no last names yet";
	}

	// Generates the salary of the Unit based on their stats.
	int salaryCalc() {
		return 1000;
	}

	// Damage calculator 
	int damageCalc() {
		if ( primary->getRemainingUses() <= 0) { return 0; } // If the unit is out of ammo, no damage is dealt.
		int poss_Dam = primary->getPower(); // Total Damage possible.
		double chance = primary->getAccuracy() + aim; // Total hit chance, based on weapon acc and unit aim.
		if (chance >= 1) { return poss_Dam; } // If the chance is greater than 1, return full damage.

		if (targetHit(chance)) { return poss_Dam; }
		else return 0;
	}

	// Determines if the target is hit, based on the given hit chance.
	bool targetHit(double chance) {
		// generate a number between 0 and 99. If the chance is higher than that number, the shot hits.
		int randomVal = (rand() % 99)/100;
		return (chance >= randomVal);
	}

	// equips a weapon to the unit
	void equipWeapon(Weapon* weap) {
		setPrimary(weap);
	}

	// equips gear to the unit
	void equipGear1(Gear* g) {
		setGear1(g);
	}

#pragma endregion
};