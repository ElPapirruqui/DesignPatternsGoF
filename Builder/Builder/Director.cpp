#include "PlayerBuilder.h"
#include "Director.h"

Player* Director::CreateCleric() {
	PlayerBuilder* PB = new PlayerBuilder();
	return PB
		->Name("Grassi")
		->Level(1)
		->Gold(100)
		->Class("Cleric")
		->Strength(10)
		->Intelligence(10)
		->Agility(0)
		->Health(200)
		->Armor(50)
		->Create();
}

Player* Director::CreateThief() {
	PlayerBuilder* PB = new PlayerBuilder();
	return PB
		->Name("Alberto Fernandez")
		->Level(1)
		->Gold(50)
		->Class("Thief")
		->Strength(5)
		->Intelligence(15)
		->Agility(30)
		->Health(50)
		->Armor(5)
		->Create();
}

Player* Director::CreateWarrior() {
	PlayerBuilder* PB = new PlayerBuilder();
	return PB
		->Name("Martin Karadagian")
		->Level(1)
		->Gold(10)
		->Class("Warrior")
		->Strength(25)
		->Intelligence(5)
		->Agility(10)
		->Health(150)
		->Armor(25)
		->Create();
}

Player* Director::CreateMage() {
	PlayerBuilder* PB = new PlayerBuilder();
	return PB
		->Name("Solber")
		->Level(1)
		->Gold(0)
		->Class("Mage")
		->Strength(5)
		->Intelligence(30)
		->Agility(5)
		->Health(100)
		->Armor(0)
		->Create();
}

Player* Director::CreateArcher() {
	PlayerBuilder* PB = new PlayerBuilder();
	return PB
		->Name("Pato Abondancieri")
		->Level(1)
		->Gold(10)
		->Class("Archer")
		->Strength(10)
		->Intelligence(10)
		->Agility(20)
		->Health(120)
		->Armor(12)
		->Create();
}
