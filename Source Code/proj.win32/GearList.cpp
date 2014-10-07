//Jack Kelly
#include "Gear.h"
#include "cocos2d.h"

// Gear: Kevlar Vest ----------------------------------------------------------
class KevlarVest : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}
	KevlarVest()
	{
		setName("Kevlar Vest");
		//setImage(-Image-);
		setPrice(0);
		setType("Passive");
		setAttMod(1.00);
		setDefMod(1.20);
		setAccMod(1.00);
		setHealthMod(1.00);
		setMoveMod(1.00);
		setRangeMod(1.00);
	}
};
//-----------------------------------------------------------------------------

// Gear: Tactical Armor Vest --------------------------------------------------
class TacticalArmorVest : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}
	TacticalArmorVest()
	{
		setName("Tactical Armor Vest");
		//setImage(-Image-);
		setPrice(0);
		setType("Passive");
		setAttMod(1.00);
		setDefMod(1.60);
		setAccMod(1.00);
		setHealthMod(1.00);
		setMoveMod(1.00);
		setRangeMod(1.00);
	}
};
//-----------------------------------------------------------------------------

// Gear: First Aid Kit --------------------------------------------------------
class FirstAidKit : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}
	FirstAidKit()
	{
		setName("First Aid Kit");
		//setImage(-Image-);
		setPrice(0);
		setType("Active");
		setAttMod(1.00);
		setDefMod(1.00);
		setAccMod(1.00);
		setHealthMod(0.50);
		setMoveMod(1.00);
		setRangeMod(1.00);
	}
};
//-----------------------------------------------------------------------------

// Gear: Holographic Sight ----------------------------------------------------
class HolographicSight : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}
	HolographicSight()
	{
		setName("Holographic Sight");
		//setImage(-Image-);
		setPrice(0);
		setType("Passive");
		setAttMod(1.00);
		setDefMod(1.0);
		setAccMod(1.20);
		setHealthMod(1.00);
		setMoveMod(1.00);
		setRangeMod(1.00);
	}
};
//-----------------------------------------------------------------------------

// Gear: Extended Barrel ------------------------------------------------------
class ExtendedBarrel : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}
	ExtendedBarrel()
	{
		setName("Extended Barrel");
		//setImage(-Image-);
		setPrice(0);
		setType("Passive");
		setAttMod(1.00);
		setDefMod(1.00);
		setAccMod(1.00);
		setHealthMod(1.00);
		setMoveMod(1.00);
		setRangeMod(1.20);
	}
};
//-----------------------------------------------------------------------------

// Gear: Piercing Rounds ------------------------------------------------------
class PiercingRounds : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}
	PiercingRounds()
	{
		setName("Piercing Rounds");
		//setImage(-Image-);
		setPrice(0);
		setType("Passive");
		setAttMod(1.20);
		setDefMod(1.00);
		setAccMod(1.00);
		setHealthMod(1.00);
		setMoveMod(1.00);
		setRangeMod(1.00);
	}
};
//-----------------------------------------------------------------------------

// Gear: Adrenaline Shot ------------------------------------------------------
class AdrenalineShot : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}
	AdrenalineShot()
	{
		setName("Adrenaline Shot");
		//setImage(-Image-);
		setPrice(0);
		setType("Passive");
		setAttMod(1.00);
		setDefMod(1.00);
		setAccMod(1.00);
		setHealthMod(1.50); //??
		setMoveMod(1.50);   //??
		setRangeMod(1.00);
	}
};
//-----------------------------------------------------------------------------

// Gear: Extended Magazine  ---------------------------------------------------
class ExtendedMagazine : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}
	ExtendedMagazine()
	{
		setName("Extended Magazine ");
		//setImage(-Image-);
		setPrice(0);
		setType("Passive");
		setAttMod(1.00);
		setDefMod(1.00);
		setAccMod(1.00);
		setHealthMod(1.00);
		setMoveMod(1.00);
		setRangeMod(1.00);
		// ?? Ammo capacity modification unavailable currently. //
	}
};
//-----------------------------------------------------------------------------

class emptyGear : public Gear
{
public:
	void doNothingGear() {}
	void doNothingItem() {}

	emptyGear()
	{
		setName("No Gear");
		// setImage(-Image-);
		setPrice(0);
		setType("Passive");
		setAttMod(1);
		setDefMod(1);
		setAccMod(1);
		setHealthMod(1);
		setMoveMod(1);
		setRangeMod(1);
	}
};


