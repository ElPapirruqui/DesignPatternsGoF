#include "../Properties/WeaponProperties.h"
#include "Staff.h"
#include<iostream>

using namespace std;

void Staff::Attack() {
	cout << "The player unseath its " + Properties->Name << endl;
	cout << "Now moves " << Properties->Range << " units closer to the target to cast the spell..." << endl;
	cout << "Starts to focus..." << endl;
	if (Properties->Quantity == 0) {
		cout << "There are no more charges in this " + Properties->Name << endl;
		cout << "" << endl;
		return;
	}

	cout << "And releases its magical powers on an area of " << Properties->AoE << " units, hitting the enemies with " << Properties->Damage << " points of " << Properties->DamageType << " damage" << endl;
	Properties->Quantity--;
	cout << "Charges left: " << Properties->Quantity << endl;
	cout << "" << endl;
}