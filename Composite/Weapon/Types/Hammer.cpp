#include "Hammer.h"
#include "../Properties/BluntDamage.h"
#include "../Properties/Stun.h"

Hammer::Hammer(string NewName, int NewDamage) :Weapon(NewName, NewDamage) {
	AddProperty(new BluntDamage());
	AddProperty(new Stun(0, 100, 3));
}