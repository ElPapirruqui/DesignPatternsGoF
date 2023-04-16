#include "../Weapon.h"
#include "BluntDamage.h"

void BluntDamage::Calculate() {
	Weapon* Parent = dynamic_cast<Weapon*>(Owner);
	int Dmg = Parent->GetDamage();
	cout << "Weapon does " << Dmg << " of Blunt Damage" << endl;
}