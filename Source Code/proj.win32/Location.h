#pragma once
#include <string>

using namespace::std;

class Location {
private:
	int x;
	int y;
public:
	// Constructor
	Location(int val1, int val2) {
		x = calcPixels(val1);
		y = calcPixels(val2);
	}

	// GETTERS
	int getX();
	int getY();

	// SETTERS
	void setX(int);
	void setY(int);


	// Convert grid coordinates to pixels
	int calcPixels(int value) {
		return (((value - 1) * 32) + 16);
	}
};