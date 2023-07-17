#include "../Weapon.h"
#include "PiercingDamage.h"

void PiercingDamage::Calculate() {
	Weapon* Parent = dynamic_cast<Weapon*>(Owner);
	int Dmg = Parent->GetDamage();
	cout << "Weapon does " << Dmg << " of Piercing Damage" << endl;
}