#include "../Weapon.h"
#include "SlashingDamage.h"

void SlashingDamage::Calculate() {
	Weapon* Parent = dynamic_cast<Weapon*>(Owner);
	int Dmg = Parent->GetDamage();
	cout << "Weapon does " << Dmg << " of Slashing Damage" << endl;
}