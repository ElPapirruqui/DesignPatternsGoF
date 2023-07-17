#pragma once
#include "Composite/Composite.h"

class Weapon;

class Player : public Composite {
public:
	void Attack();
	void EquipWeapon(int WeaponIndex);
	void AddWeapon(Weapon* NewWeapon);
private:
	Weapon* CurrentWeapon;
};