#pragma once
#include "Weapon.h"

class Sword : public Weapon {
public:
	Sword(WeaponProperties* NewProperties) :Weapon(NewProperties) {}
	void Attack() override;
};
