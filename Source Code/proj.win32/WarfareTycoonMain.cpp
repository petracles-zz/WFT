//Sanders Lauture, Conor Golden, Jack Kelly, Arjun Rao, Chris Kuffert
#include "Item.h"
#include "Weapon.h"
#include "WeaponList.cpp"
#include "GearList.cpp"
#include "Unit.h"
#include "Enemy.h"
#include "Player.h"
#include "Location.h"
#include "Terrain.h"
#include "TerrainType.h"
#include "TerrainList.cpp"


void main()

{
	// GUN EXAMPLES
	Glock18 G18 = Glock18();
	USPTactical USP = USPTactical();
	M1911 M19 = M1911();
	FNFiveSeveN FiveSeven = FNFiveSeveN();
	DesertEagle Deagle = DesertEagle();
	MOSSBERG MossBerg = MOSSBERG();
	XM1014 XM = XM1014();
	AA12 aa12 = AA12();
	FAMAS famas = FAMAS();
	AK47 ak47 = AK47();
	M4A1 M4 = M4A1();
	SCAR Scar = SCAR();
	XM8P XM8 = XM8P();
	AUG aug = AUG();
	SSG08 ssg = SSG08();
	SVD svd = SVD();
	Magnum magnum338 = Magnum();
	MP7 mp7 = MP7();
	P90 p90 = P90();
	UMP45 ump45 = UMP45();

	// GEAR EXAMPLES
	KevlarVest kevlar = KevlarVest();
	TacticalArmorVest tacVest = TacticalArmorVest();
	FirstAidKit FirstAid = FirstAidKit();
	HolographicSight HoloSight = HolographicSight();
	ExtendedBarrel ExtBarrel = ExtendedBarrel();
	PiercingRounds PRounds = PiercingRounds();
	AdrenalineShot AdShot = AdrenalineShot();
	ExtendedMagazine ExtMag = ExtendedMagazine();

	// UNIT EXAMPLES
	Unit unit1 = Unit();
	Enemy enemy1 = Enemy();

	// PLAYER EXAMPLES
	Player p1 = Player();

	// LOCATION EXAMPLES
	Location loca = Location(5, 5);

	
	// TERRAIN EXAMPLES
	Grass grass1 = Grass();
	Road road1 = Road();
	TallGrass tallGrass1 = TallGrass();
	Tower Tower1 = Tower();
	Hill hill1 = Hill();
	Wall wall1 = Wall();
	Water water1 = Water();
	Indoor indoor1 = Indoor();
	Tree tree1 = Tree();
	

	cout << "hi";
	string s;
	cin >> s;
}
