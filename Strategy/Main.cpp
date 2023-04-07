#include<iostream>
#include<string>
#include<vector>
#include "Components/Attack/AttackComponent.h"
#include "Components/Health/HealthComponent.h"
#include "Strategy/AttackFireball.h"
#include "Strategy/AttackSword.h"
#include "Entity/Enemy/Enemy.h"
#include "Entity/Player/Player.h"
#include "World/World.h"

using namespace std;

int main() {
	World* MyWorld = World::GetCurrentWorld();
	MyWorld->SetDimension(Vector3(100, 100, 0));
	MyWorld->PopulateWorld<Enemy>(1, 10);

	Player* MyPlayer = new Player();

	Enemy* MyEnemy = dynamic_cast<Enemy*>(MyWorld->GetRandomEntity());

	cout << "Target: " + MyEnemy->GetCurrentPosition().ToString()  << endl;
	cout << "" << endl;

	MyPlayer->PAttackComp->Attack(new AttackSword(MyEnemy));
	MyPlayer->PAttackComp->Attack(new AttackFireball(MyEnemy));

	vector<IEntity*>& Entities = MyWorld->GetAllEntities();
	for (IEntity* Ent : Entities) {
		Enemy* CurrentEnemy = dynamic_cast<Enemy*>(Ent);
		cout << "Enemy:" << endl;
		cout << "- Location: " + CurrentEnemy->GetCurrentPosition().ToString() << endl;
		cout << "- Health: " + to_string(CurrentEnemy->EHealthComp->Health) << endl;
		cout << "" << endl;
	}

	return 0;
}