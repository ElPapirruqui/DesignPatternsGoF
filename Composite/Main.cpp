#include "Weapon/Types/Sword.h"
#include "Weapon/Types/Spear.h"
#include "Weapon/Types/Hammer.h"
#include "Weapon/Types/FireSword.h"
#include "Weapon/Types/IceSpear.h"
#include "Player.h"

int main() {

	Player* MyPlayer = new Player();
	Sword* MySword = new Sword("Sword", 10);
	Spear* MySpear = new Spear("Spear", 8);
	Hammer* MyHammer = new Hammer("Hammer", 12);

	FireSword* Hellfire = new FireSword("Hellfire", 15);
	IceSpear* FrozenDeath = new IceSpear("Frozen Death", 13);

	MyPlayer->AddWeapon(MySword);
	MyPlayer->AddWeapon(MySpear);
	MyPlayer->AddWeapon(MyHammer);

	MyPlayer->AddWeapon(Hellfire);
	MyPlayer->AddWeapon(FrozenDeath);

	MyPlayer->RemoveComponent(MySword);

	int WeapCount = 0;
	auto children = MyPlayer->GetChildren();
	for (auto child : children) {
		MyPlayer->EquipWeapon(WeapCount);
		MyPlayer->Attack();
		WeapCount++;
	}

	return 0;
}