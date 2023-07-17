#include "Player.h"
#include "Properties/WeaponProperties.h"
#include<vector>
#include "Weapons/Sword.h"
#include "Weapons/Bow.h"
#include "Weapons/Staff.h"

int main(){

	Player* MyPlayer = new Player();
	MyPlayer->EquipWeapon(new Sword(new WeaponProperties("Long Sword", 10, 1, 3, 1, "Slashing")));
	MyPlayer->Attack();

	MyPlayer->EquipWeapon(new Bow(new WeaponProperties("Swift Bow", 8, 20, 2, 3, "Piercing")));
	MyPlayer->Attack();
	MyPlayer->Attack();
	MyPlayer->Attack();
	MyPlayer->Attack();

	MyPlayer->EquipWeapon(new Staff(new WeaponProperties("Fire Staff", 15, 10, 5, 2, "Magical Fire")));
	MyPlayer->Attack();
	MyPlayer->Attack();
	MyPlayer->Attack();

	return 0;
}