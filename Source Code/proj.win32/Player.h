#pragma once
#include <string>
#include <vector>
#include "Unit.h";

using namespace std;

class Player
{
private:
	string name;
	double totalMoney;
	

public:
	vector<Unit*> roster;
	// Constructor
	Player() {
		name = "Player 1";
		totalMoney = 10000;
	}

	// GETTERS
	string getName();
	int getTotalMoney();
	vector<Unit*> getRoster();

	// SETTERS
	void setName(string);
	void setTotalMoney(int);
	void addUnitToRoster(Unit*);

	// Other methods

	// equip a weapon on the unit with this index.
	void equipWeapon(Weapon* weap, int unit) {
		try {
			roster[unit]->equipWeapon(weap);
		}
		catch (const std::exception& ex)
		{
			cout << "No Unit Found" << endl;
		}
	}

	// equip a piece of gear on a unit wth this index.
	void equipGear(Gear* g, int unit) {
		try {
			roster[unit]->equipGear1(g);
		}
		catch (const std::exception& ex)
		{
			cout << "No Unit Found" << endl;
		}
	}

	// Move the unit with the given index.
	void moveUnit(int unit, Location* loc) {
		try {
			roster[unit]->moveTo(loc);
		}
		catch (const std::exception& ex)
		{
			cout << "No Unit Found" << endl;
		}
	}
};
