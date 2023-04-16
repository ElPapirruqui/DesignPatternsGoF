#include "Sword.h"
#include "../Properties/SlashingDamage.h"
#include "../Properties/Bleeding.h"

Sword::Sword(string NewName, int NewDamage):Weapon(NewName, NewDamage) {
	AddProperty(new SlashingDamage());
	AddProperty(new Bleeding(10,100,5));
}