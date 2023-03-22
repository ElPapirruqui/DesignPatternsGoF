#include<iostream>
#include "Configuration/Custom/MyEnemyConfig.h"
#include "Factory/EnemyFactory.h"

using namespace std;

int main() {
	MyEnemyConfig* config = new MyEnemyConfig();
	EnemyFactory* enemyFactory = new EnemyFactory(config);

	IEnemy* enemy1 = enemyFactory->CreateEnemy("EnemyMelee");
	string message1 = enemy1->Welcome();
	cout << message1 << endl;

	IEnemy* enemy2 = enemyFactory->CreateEnemy("EnemyRange");
	string message2 = enemy2->Welcome();
	cout << message2 << endl;

	return 0;
}