//Chris Kuffert
#include "Weapon.h"
#include "cocos2d.h"

// Weapon: Glock 18 -----------------------------------------------------------
class Glock18 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	Glock18()    // Constructs a Glock 18. All weapon stats are predetermined.
	{
		setName("Glock 18");
		//setImage(-someImage-);
		setPrice(400);
		setAccuracy(.25);
		setPower(2);
		setRangeCOE(4);
		setRemainingUses(5);
		setTotalUses(5);
	}
};

//-----------------------------------------------------------------------------

// Weapon: USP Tactical -------------------------------------------------------
class USPTactical : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	USPTactical()    // Constructs a USP Tactical. All weapon stats are predetermined.
	{
		setName("USP Tactical");
		//setImage(-someImage-);
		setPrice(450);
		setAccuracy(.25);
		setPower(2);
		setRangeCOE(6);
		setRemainingUses(4);
		setTotalUses(4);
	}
};

//-----------------------------------------------------------------------------

// Weapon: M1911 --------------------------------------------------------------
class M1911 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	M1911()    // Constructs a M1911. All weapon stats are predetermined.
	{
		setName("M1911");
		//setImage(-someImage-);
		setPrice(800);
		setAccuracy(.25);
		setPower(3);
		setRangeCOE(6);
		setRemainingUses(4);
		setTotalUses(4);
	}
};

//-----------------------------------------------------------------------------

// Weapon: FN Five-SeveN ------------------------------------------------------
class FNFiveSeveN : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	FNFiveSeveN()    // Constructs a FN Five-SeveN. All weapon stats are predetermined.
	{
		setName("FN Five-SeveN");
		//setImage(-someImage-);
		setPrice(600);
		setAccuracy(.25);
		setPower(4);
		setRangeCOE(3);
		setRemainingUses(4);
		setTotalUses(4);
	}
};

//-----------------------------------------------------------------------------

// Weapon: Desert Eagle .50 cal -----------------------------------------------
class DesertEagle : public Weapon
{
public:
	void doNothingItem() { }
	void doNothingWeapon() {}
	DesertEagle()    // Constructs a Desert Eagle .50 cal. All weapon stats are predetermined.
	{
		setName("Desert Eagle .50 cal");
		//setImage(-someImage-);
		setPrice(1500);
		setAccuracy(.25);
		setPower(7);
		setRangeCOE(6);
		setRemainingUses(1);
		setTotalUses(1);
	}
};

//-----------------------------------------------------------------------------

// Weapon: MOSSBERG 590 -------------------------------------------------------
class MOSSBERG : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	MOSSBERG()    // Constructs a MOSSBERG 590. All weapon stats are predetermined.
	{
		setName("MOSSBERG 590");
		//setImage(-someImage-);
		setPrice(1900);
		setAccuracy(.25);
		setPower(9);
		setRangeCOE(2);
		setRemainingUses(2);
		setTotalUses(2);
	}
};

//-----------------------------------------------------------------------------

// Weapon: XM1014 -------------------------------------------------------------
class XM1014 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	XM1014()    // Constructs a XM1014. All weapon stats are predetermined.
	{
		setName("XM1014");
		//setImage(-someImage-);
		setPrice(2200);
		setAccuracy(.25);
		setPower(6);
		setRangeCOE(4);
		setRemainingUses(5);
		setTotalUses(5);
	}
};

//-----------------------------------------------------------------------------

// Weapon: AA-12 --------------------------------------------------------------
class AA12 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	AA12()    // Constructs a AA-12. All weapon stats are predetermined.
	{
		setName("AA-12");
		//setImage(-someImage-);
		setPrice(3800);
		setAccuracy(.25);
		setPower(8);
		setRangeCOE(5);
		setRemainingUses(3);
		setTotalUses(3);
	}
};

//-----------------------------------------------------------------------------

// Weapon: FAMAS --------------------------------------------------------------
class FAMAS : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	FAMAS()    // Constructs a FAMAS. All weapon stats are predetermined.
	{
		setName("FAMAS");
		//setImage(-someImage-);
		setPrice(2500);
		setAccuracy(.25);
		setPower(6);
		setRangeCOE(5);
		setRemainingUses(5);
		setTotalUses(5);
	}
};

//-----------------------------------------------------------------------------

// Weapon: AK47 ---------------------------------------------------------------
class AK47 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	AK47()    // Constructs a AK47. All weapon stats are predetermined.
	{
		setName("AK47");
		//setImage(-someImage-);
		setPrice(2900);
		setAccuracy(.25);
		setPower(7);
		setRangeCOE(5);
		setRemainingUses(5);
		setTotalUses(5);
	}
};

//-----------------------------------------------------------------------------

// Weapon: M4A1 ---------------------------------------------------------------
class M4A1 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	M4A1()    // Constructs a M4A1. All weapon stats are predetermined.
	{
		setName("M4A1");
		//setImage(-someImage-);
		setPrice(3000);
		setAccuracy(.25);
		setPower(6);
		setRangeCOE(6);
		setRemainingUses(6);
		setTotalUses(6);
	}
};

//-----------------------------------------------------------------------------

// Weapon: SCAR-H -------------------------------------------------------------
class SCAR : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	SCAR()    // Constructs a SCAR-H. All weapon stats are predetermined.
	{
		setName("SCAR-H");
		//setImage(-someImage-);
		setPrice(3200);
		setAccuracy(.25);
		setPower(7);
		setRangeCOE(4);
		setRemainingUses(4);
		setTotalUses(4);
	}
};

//-----------------------------------------------------------------------------

// Weapon: XM8-P --------------------------------------------------------------
class XM8P : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	XM8P()    // Constructs a XM8-P. All weapon stats are predetermined.
	{
		setName("XM8-P");
		//setImage(-someImage-);
		setPrice(400);
		setAccuracy(.25);
		setPower(2);
		setRangeCOE(4);
		setRemainingUses(5);
		setTotalUses(5);
	}
};

//-----------------------------------------------------------------------------

// Weapon: AUG ----------------------------------------------------------------
class AUG : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	AUG()    // Constructs a AUG. All weapon stats are predetermined.
	{
		setName("AUG");
		//setImage(-someImage-);
		setPrice(4000);
		setAccuracy(.25);
		setPower(5);
		setRangeCOE(9);
		setRemainingUses(4);
		setTotalUses(4);
	}
};

//-----------------------------------------------------------------------------

// Weapon: SSG 08 -------------------------------------------------------------
class SSG08 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	SSG08()    // Constructs a SSG 08. All weapon stats are predetermined.
	{
		setName("SSG 08");
		//setImage(-someImage-);
		setPrice(3000);
		setAccuracy(.25);
		setPower(7);
		setRangeCOE(9);
		setRemainingUses(2);
		setTotalUses(2);
	}
};

//-----------------------------------------------------------------------------

// Weapon: SVD ----------------------------------------------------------------
class SVD : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	SVD()    // Constructs a SVD. All weapon stats are predetermined.
	{
		setName("SVD");
		//setImage(-someImage-);
		setPrice(4000);
		setAccuracy(.25);
		setPower(8);
		setRangeCOE(8);
		setRemainingUses(4);
		setTotalUses(4);
	}
};

//-----------------------------------------------------------------------------

// Weapon: .338 Magnum --------------------------------------------------------
class Magnum : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	Magnum()    // Constructs a .338 Magnum. All weapon stats are predetermined.
	{
		setName(".338 Magnum");
		//setImage(-someImage-);
		setPrice(5000);
		setAccuracy(.25);
		setPower(10);
		setRangeCOE(10);
		setRemainingUses(1);
		setTotalUses(1);
	}
};

//-----------------------------------------------------------------------------

// Weapon: MP7 -----------------------------------------------------------
class MP7 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	MP7()    // Constructs a MP7. All weapon stats are predetermined.
	{
		setName("MP7");
		//setImage(-someImage-);
		setPrice(2000);
		setAccuracy(.25);
		setPower(5);
		setRangeCOE(4);
		setRemainingUses(6);
		setTotalUses(6);
	}
};

//-----------------------------------------------------------------------------

// Weapon: P90 ----------------------------------------------------------------
class P90 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	P90()    // Constructs a P90. All weapon stats are predetermined.
	{
		setName("P90");
		//setImage(-someImage-);
		setPrice(2400);
		setAccuracy(.25);
		setPower(5);
		setRangeCOE(5);
		setRemainingUses(6);
		setTotalUses(6);
	}
};

//-----------------------------------------------------------------------------

// Weapon: UMP45 --------------------------------------------------------------
class UMP45 : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	UMP45()    // Constructs a UMP45. All weapon stats are predetermined.
	{
		setName("UMP45");
		//setImage(-someImage-);
		setPrice(3000);
		setAccuracy(.25);
		setPower(4);
		setRangeCOE(6);
		setRemainingUses(7);
		setTotalUses(7);
	}
};

//-----------------------------------------------------------------------------

// a blank weapon.
class emptyWeapon : public Weapon
{
public:
	void doNothingWeapon() {}
	void doNothingItem() {}
	emptyWeapon()
	{
		setName("No Weapon");
		// setImage(-someImage-);
		setPrice(0);
		setAccuracy(0);
		setPower(0);
		setRangeCOE(0);
		setRemainingUses(0);
		setTotalUses(0);
	}
};
