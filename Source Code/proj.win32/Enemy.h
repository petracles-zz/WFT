#include "Unit.h";

using namespace std;

#pragma once

class Enemy : public Unit
{
	// Inherits from Unit

public:

	// Methods:
	void move();
	void attack(Unit that);
	void pathFinding();
	void scanGrid();
};