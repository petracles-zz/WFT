#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
//#include "Weapon.h"
//#include "Weapon.cpp"
//#include "WeaponList.cpp"
using std::endl;
using std::cout;
using std::cin;
using std::string;


//Items class, contains the two subclasses of weapons and gear.
class Item {
private:
	string name;           // The name of the Item.
	//image itemImage;     // The picture image of the Item.
	int price;             // The numerical Price of the Item.
public:
	virtual void doNothingItem() = 0;   // Allows Item to be an abstract class.

	// GETTERS
	string getName();
	//image getImage();
	int getPrice();

	// SETTERS
	void setName(string);
	//void image setImage();
	void setPrice(int);
};




