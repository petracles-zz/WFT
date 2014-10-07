//Sanders Lauture
#include "Terrain.h"

// Terrain: Grass -----------------------------------------------------------
class Grass : public Terrain
{
public:
	Grass()    // Constructs a Grass Terain Type. The terrain stats are predetermined.
	{
		setType("Grass");
		//setImage();
		setCost(1);
		setDefenseBonus(0);
	}
};

// Terrain: Road -----------------------------------------------------------
class Road : public Terrain
{
public:
	Road()    // Constructs a Road Terain Type. The terrain stats are predetermined.
	{
		setType("Road");
		//setImage();
		setCost(1);
		setDefenseBonus(0);
	}
};

// Terrain: Tall Grass -----------------------------------------------------------
class TallGrass : public Terrain
{
public:
	TallGrass()    // Constructs a Tall Grass Terain Type. The terrain stats are predetermined.
	{
		setType("Tall Grass");
		//setImage();
		setCost(2);
		setDefenseBonus(1);
	}
};

// Terrain: Tower -----------------------------------------------------------
class Tower : public Terrain
{
public:
	Tower()    // Constructs a Tower Terain Type. The terrain stats are predetermined.
	{
		setType("Tower");
		//setImage();
		setCost(3);
		setDefenseBonus(3);
	}
};

// Terrain: Hill -----------------------------------------------------------
class Hill : public Terrain
{
public:
	Hill()    // Constructs a Hill Terain Type. The terrain stats are predetermined.
	{
		setType("Hill");
		//setImage();
		setCost(2);
		setDefenseBonus(2);
	}
};

// Terrain: Wall -----------------------------------------------------------
class Wall : public Terrain
{
public:
	Wall()    // Constructs a Wall Terain Type. The terrain stats are predetermined.
	{
		setType("Wall");
		//setImage();
		setCost(-1);
		setDefenseBonus(-1);
	}
};

// Terrain: Water -----------------------------------------------------------
class Water : public Terrain
{
public:
	Water()    // Constructs a Water Terain Type. The terrain stats are predetermined.
	{
		setType("Water");
		//setImage();
		setCost(-1);
		setDefenseBonus(-1);
	}
};

class Indoor : public Terrain
{
public:
	Indoor()    // Constructs a Indoor Terain Type. The terrain stats are predetermined.
	{
		setType("Indoor");
		//setImage();
		setCost(1);
		setDefenseBonus(1);
	}
};

class Tree : public Terrain
{
public:
	Tree()    // Constructs a Tree Terain Type. The terrain stats are predetermined.
	{
		setType("Tree");
		//setImage();
		setCost(2);
		setDefenseBonus(2);
	}
};