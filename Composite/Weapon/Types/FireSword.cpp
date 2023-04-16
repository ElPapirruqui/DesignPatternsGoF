#include "FireSword.h"
#include "../Properties/Fire.h"
#include "../Properties/SlashingDamage.h"

FireSword::FireSword(string NewName, int NewDamage) :Weapon(NewName,NewDamage) {
	AddProperty(new SlashingDamage());
	AddProperty(new Fire(10, 100, 3));
}