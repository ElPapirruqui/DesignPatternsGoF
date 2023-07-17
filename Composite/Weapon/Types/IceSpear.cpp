#include "IceSpear.h"
#include "../Properties/Critic.h"
#include "../Properties/Ice.h"
#include "../Properties/PiercingDamage.h"

IceSpear::IceSpear(string NewName, int NewDamage) :Weapon(NewName, NewDamage) {
	AddProperty(new PiercingDamage());
	AddProperty(new Ice(10, 100, 3));
	AddProperty(new Critic(3, 100, 0));
}