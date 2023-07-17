#pragma once
#include "Weapon.h"

class Staff : public Weapon {
public:
	Staff(WeaponProperties* NewProperties) :Weapon(NewProperties) {}
	void Attack() override;
};