#pragma once
#include "Weapon.h"

class Bow : public Weapon {
public:
	Bow(WeaponProperties* NewProperties) :Weapon(NewProperties) {}
	void Attack() override;
};