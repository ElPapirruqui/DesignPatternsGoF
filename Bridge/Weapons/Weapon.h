#pragma once

class WeaponProperties;

class Weapon {
public:
	Weapon(WeaponProperties* NewProperties) :Properties(NewProperties) {}
	virtual void Attack() = 0;
protected:
	WeaponProperties* Properties;
};