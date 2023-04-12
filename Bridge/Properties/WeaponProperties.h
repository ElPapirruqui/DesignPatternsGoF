#pragma once
#include<string>

using namespace std;

class WeaponProperties {
public:
	WeaponProperties(string NewName, int NewDamage, int NewRange, int NewAoE, int NewQuantity, string NewDamageType)
		:Name(NewName), Damage(NewDamage), Range(NewRange), AoE(NewAoE), Quantity(NewQuantity),DamageType(NewDamageType) {}
	string Name;
	int Damage;
	int Range;
	int AoE;
	int Quantity;
	string DamageType;
};