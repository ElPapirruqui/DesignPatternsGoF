#include "../Properties/WeaponProperties.h"
#include "Sword.h"
#include<iostream>

using namespace std;

void Sword::Attack() {
	cout << "The player unseath its " + Properties->Name << endl;
	cout << "Goes closer to its target... " << endl;
	cout << "Swing his " + Properties->Name + " and..." << endl;
	cout << "Hits " << Properties->AoE << " enemies, dealing " << Properties->Damage << " points of " << Properties->DamageType << " damage" << endl;
	cout << "" << endl;
}