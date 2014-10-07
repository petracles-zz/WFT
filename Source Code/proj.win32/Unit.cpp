//Arjun Rao, Jack Kelly
#include "Unit.h"
#include "Weapon.h"
#include "gear.h"
#include "Item.h"
#include "WeaponList.cpp"
#include "GearList.cpp"
#include "Location.h"

// pointer for empty weapon
emptyWeapon emptyWeap = emptyWeapon();
Weapon* emptyWeap_p = &emptyWeap;

// pointer for an empty gear
emptyGear emptyG = emptyGear();
Gear* emptyGear_p = &emptyG;

// pointer for a location
Location loc = Location(0, 0);
Location* locp = &loc;


Unit::Unit()
{
	setHP(healthGen());
	setLoc(locp);
	setSpeed(speedGen());
	setAim(aimGen());
	setMorale(5);
	setFirstName(randFirst());
	setLastName(randLast());
	setPrimary(emptyWeap_p);
	setSecondary(emptyWeap_p);
	setGear1(emptyGear_p);
	setGear2(emptyGear_p);
	setSalary(salaryCalc());
	setIsAlive(true);
	setAmmo(1);
	setIsSelected(false);
}

#pragma region METHODS

// getters:

// Gets the units HP
int Unit::getHP()
{ 
	return HP; 
}

// Gets the units Location
Location* Unit::getLoc()
{
	return loc;
}

// Gets the units Speed
int Unit::getSpeed()
{ 
	return speed; 
}

// Gets the units first name
string Unit::getFirstName()
{
	return nameFirst;
}

// Gets the units first name
string Unit::getLastName()
{
	return nameLast;
}

// Gets the active weapon
int Unit::getActive()
{
	return activeWeap;
}

// Gets the primary weapon
Weapon* Unit::getPrimary()
{
	return primary;
}

// Gets the secondary weapon
Weapon* Unit::getSecondary()
{
	return secondary;
}

// Gets gear1
Gear* Unit::getGear1()
{
	return gear1;
}

// Gets gear2
Gear* Unit::getGear2()
{
	return gear2;
}

// Gets aim
double Unit::getAim()
{
	return aim;
}

// Gets morale
int Unit::getMorale()
{
	return morale;
}

// Gets salary
double getSalary();

// Gets imageset
//vector<images> Unit::getImageset()
//{
//	return imageset;
//}

// Gets isAlive
bool Unit::getIsAlive()
{
	return isAlive;
}

// Gets ammo
int Unit::getAmmo()
{
	return ammo;
}

bool Unit::getIsSelected()
{
	return isSelected;
}

// setters:

// sets the units HP
void Unit::setHP(int hp)
{
	hp = hp;
}

// sets the units location 
void Unit::setLoc(Location* loca)
{
	loc = loca;
}

// sets the units Speed
void Unit::setSpeed(int speed)
{
	speed = speed;
}

// sets the units first name
void Unit::setFirstName(string name)
{
	name = name;
}

// sets the units first name
void Unit::setLastName(string name)
{
	name = name;
}

// sets the active weapon
void Unit::setActive(int activenum)
{
	activeWeap = activenum;
}

// sets the primary weapon
void Unit::setPrimary(Weapon * prim)
{
	primary = prim;
}

// sets the secondary weapon
void Unit::setSecondary(Weapon * sec)
{
	secondary = sec;
}

// sets gear1
void Unit::setGear1(Gear* gear)
{
	gear1 = gear;
}

// sets gear2
void Unit::setGear2(Gear* gear)
{
	gear2 = gear;
}

// sets aim
void Unit::setAim(double aim)
{
	aim = aim;
}

// sets morale
void Unit::setMorale(int morale)
{
	morale = morale;
}

// sets salary
void Unit::setSalary(double sal)
{
	salary = sal;
}

// sets imageset
//void setImageset(vector<image> images)
//{
//	imageset = images;
//}

// sets isAlive
void Unit::setIsAlive(bool alive)
{
	isAlive = alive;
}

// sets ammo
void Unit::setAmmo(int ammo)
{
	ammo = ammo;
}

void Unit::setIsSelected(bool selected)
{
	isSelected = selected;
}

// Moves this unit to the given Location. 
void Unit::moveTo(Location* local) {
	setLoc(local);
}

// Attack the ENEMY instance passed in to the fxn. The attacking UNIT-s class and weapon/gear
// will determine how the attack is performed.
void Unit::attack(Unit* target) {
	int damageDealt = damageCalc(); // calculates possible damage
	int healthBefore = target->getHP();  // saves the targets health before the attack
	target->setHP(healthBefore - damageDealt); // reduces targets health
	if (target->HP <= 0) { target->setIsAlive(false); } // if target has no more health, he is no longer alive.
}

// Method used to calculate the movement options a UNIT has on the game board. Movement is indicative
// of a UNIT-s class, as other classes have more mobility than others. Movement is relative the grid
// of the game board.
void Unit::pathFinding() {

}

// Helper method for pathFinding; determines the "reachable" area for that UNIT.
void Unit::scanGrid() {

}


