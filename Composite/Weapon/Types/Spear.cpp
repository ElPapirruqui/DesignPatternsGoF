#include "Spear.h"
#include "../Properties/PiercingDamage.h"
#include "../Properties/Critic.h"

Spear::Spear(string NewName, int NewDamage) :Weapon(NewName, NewDamage) {
	AddProperty(new PiercingDamage());
	AddProperty(new Critic(2, 100, 0));
}