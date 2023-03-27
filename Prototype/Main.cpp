#include<iostream>
#include<string>
#include<vector>
#include "Prototype/PrototypeRegistry.h"
#include "Enemy/IEnemy.h"

using namespace std;

int main() {	

	vector<Entity*> Entities;
	string Type = "";
	string Weapon = "";

	PrototypeRegistry* Registry = new PrototypeRegistry();
	Registry->Add(EEnemyType::Archer, new IEnemy(EEnemyType::Archer, EWeaponType::Bow, 80, 50, 10));
	Registry->Add(EEnemyType::Warrior, new IEnemy(EEnemyType::Warrior, EWeaponType::Sword, 30, 150, 80));
	Registry->Add(EEnemyType::Mage, new IEnemy(EEnemyType::Mage, EWeaponType::Staff, 10, 40, 0));
	Registry->Add(EEnemyType::Rogue, new IEnemy(EEnemyType::Rogue, EWeaponType::Dagger, 150, 60, 30));

	Entities.push_back(Registry->Create(EEnemyType::Mage));
	Entities.push_back(Registry->Create(EEnemyType::Warrior));
	Entities.push_back(Registry->Create(EEnemyType::Archer));
	Entities.push_back(Registry->Create(EEnemyType::Archer));
	Entities.push_back(Registry->Create(EEnemyType::Warrior));
	Entities.push_back(Registry->Create(EEnemyType::Rogue));
	Entities.push_back(Registry->Create(EEnemyType::Mage));
	Entities.push_back(Registry->Create(EEnemyType::Mage));
	Entities.push_back(Registry->Create(EEnemyType::Rogue));

	for (Entity* _Entity : Entities) {
		IEnemy* Enemy = dynamic_cast<IEnemy*>(_Entity);
		switch (Enemy->GetType())
		{
		case Warrior:
			Type = "Warrior";
			break;
		case Mage:
			Type = "Mage";
			break;
		case Archer:
			Type = "Archer";
			break;
		case Rogue:
			Type = "Rogue";
			break;
		}

		switch (Enemy->GetWeapon())
		{
		case Sword:
			Weapon = "Sword";
			break;
		case Staff:
			Weapon = "Staff";
			break;
		case Bow:
			Weapon = "Bow";
			break;
		case Dagger:
			Weapon = "Dagger";
			break;
		}

		cout << "Enemy: " + Type << endl;
		cout << "Weapon: " + Weapon << endl;
		cout << "Speed: " + to_string(Enemy->GetSpeed()) << endl;
		cout << "Speed: " + to_string(Enemy->GetHealth()) << endl;
		cout << "Speed: " + to_string(Enemy->GetDefense()) << endl;
		cout << "" << endl;
	}
	
	return 0;
}