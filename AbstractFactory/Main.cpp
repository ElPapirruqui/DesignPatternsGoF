#include "Configuration/Custom/MyOrcConfig.h"
#include "Configuration/Custom/MyGoblinConfig.h"
#include "Factory/EnemyFactory.h"
#include<iostream>

using namespace std;

int main() {
	IConfiguration* Config;
	EnemyFactory* Factory;
	IEnemy* Melee;
	IEnemy* Range;

	Config = new MyOrcConfig();
	Factory = new EnemyFactory(Config);

	Melee = Factory->Create("EnemyMelee");
	cout << Melee->Welcome() << endl;

	Range = Factory->Create("EnemyRange");
	cout << Range->Welcome() << endl;

	Config = new MyGoblinConfig();
	Factory = new EnemyFactory(Config);

	Melee = Factory->Create("EnemyMelee");
	cout << Melee->Welcome() << endl;

	Range = Factory->Create("EnemyRange");
	cout << Range->Welcome() << endl;

	return 0;
}