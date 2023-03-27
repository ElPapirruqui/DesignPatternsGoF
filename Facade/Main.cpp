#include<iostream>
#include<string>
#include<vector>
#include "Entity/Enemy/Enemy.h"
#include "Entity/Player/Player.h"
#include "World/World.h"

using namespace std;

int main() {

	World* MyWorld = World::GetCurrentWorld();
	MyWorld->SetHiddingThreshold(30);
	MyWorld->PopulateWorld<Enemy>(1, 8);

	Player* MyPlayer = new Player();

	vector<IEntity*> EnemiesInSight;
	MyPlayer->Senses->GetEntitiesInSight(EnemiesInSight);

	cout << "" << endl;
	cout << "Enemies in sight: " + to_string(EnemiesInSight.size()) << endl;

	return 0;
}