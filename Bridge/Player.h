#pragma once
#include "Weapons/Weapon.h"

class Weapon;

class Player {
public:
	void EquipWeapon(Weapon* NewWeapon) { EquipedWeapon = NewWeapon; }
	void Attack() { EquipedWeapon->Attack(); }
private:
	Weapon* EquipedWeapon;
};