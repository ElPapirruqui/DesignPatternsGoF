#include<iostream>
#include "Client/MyEnemyConfig.h"
#include <stdio.h>

using namespace std;

int main() {
	MyEnemyConfig* config = new MyEnemyConfig();
	auto map = config->GetMap();

	IEnemy* enemy1 = map["EnemyMelee"]();
	string message1 = enemy1->Welcome();
	cout << message1 << endl;

	IEnemy * enemy2 = map["EnemyRange"]();
	string message2 = enemy2->Welcome();
	cout << message2 << endl;

	return 0;
}