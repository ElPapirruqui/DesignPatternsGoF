#include "../Properties/WeaponProperties.h"
#include "Bow.h"
#include<iostream>

using namespace std;

void Bow::Attack() {
	cout << "The player unseath its " + Properties->Name << endl;
	cout << "Now moves " << Properties->Range << " units closer to the target to shoot it..." << endl;
	cout << "Look in his quiver for an arrow..." << endl;
	if (Properties->Quantity == 0) {
		cout << "No more arrows to shoot" << endl;
		cout << "" << endl;
		return;
	}

	cout << "Pull the string and..." << endl;
	cout << "Releases the arrow, piercing " << Properties->AoE << " enemies, dealing " << Properties->Damage << " points of " << Properties->DamageType << " damage" << endl;
	Properties->Quantity--;
	cout << "Arrows left: " << Properties->Quantity << endl;
	cout << "" << endl;
}