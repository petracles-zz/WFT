//Chris Kuffert
#include "Item.h"
#include "Weapon.h"
#include "WeaponList.cpp"
#include "GearList.cpp"

// ITEM GETTERS:
#pragma region ITEM GETTERS

// gets the name of the item.
string Item::getName()
{
	return name;
}

// gets the image of the item.
//image Item::getImage()
//{ return itemImage; }

// gets the price of an item.
int Item::getPrice()
{
	return price;
}
#pragma endregion

// ITEM SETTERS:
#pragma region ITEM SETTERS

// sets the name to the given string.
void Item::setName(string newName)
{
	name = newName;
}

// sets the image to the given image.
//void Item::setImage(image image)
//{ image = image; }

// sets the price to the given price.
void Item::setPrice(int newPrice)
{
	price = newPrice;
}
#pragma endregion