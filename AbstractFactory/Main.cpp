#include "Configuration/Custom/MyOrcConfig.h"
#include "Configuration/Custom/MyGoblinConfig.h"
#include "Factory/EnemyFactory.h"
#include<iostream>

using namespace std;

int main() {
	MyOrcConfig* OrcConfig = new MyOrcConfig();
	auto EnemyFactory = new IFactory<IEnemy>(OrcConfig);

	IEnemy* Melee = EnemyFactory->Create("EnemyMelee");
	string MeleeMessage = Melee->Welcome();
	cout << MeleeMessage << endl;

	IEnemy* Range = EnemyFactory->Create("EnemyRange");
	string RangeMessage = Range->Welcome();
	cout << RangeMessage << endl;

	MyGoblinConfig* GoblinConfig = new MyGoblinConfig();
	EnemyFactory = new IFactory<IEnemy>(GoblinConfig);

	Melee = EnemyFactory->Create("EnemyMelee");
	MeleeMessage = Melee->Welcome();
	cout << MeleeMessage << endl;

	Range = EnemyFactory->Create("EnemyRange");
	RangeMessage = Range->Welcome();
	cout << RangeMessage << endl;

	return 0;
}