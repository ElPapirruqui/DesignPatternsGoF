#include "Configuration/Custom/EnemyGoblinConfig.h"
#include "Configuration/Custom/EnemyOrcConfig.h"
#include "Configuration/Custom/ItemGoblinConfig.h"
#include "Configuration/Custom/ItemOrcConfig.h"
#include "Example/Config/FruitConfig.h"
#include "Example/Factory/FruitFactory.h"
#include "Factory/EnemyFactory.h"
#include "Factory/ItemFactory.h"
#include "Factory/AbstractFactory.h"
#include<iostream>

using namespace std;

int main() {
	cout << "===================ORC===================" << endl;
	AbstractFactory* MyFactory = new AbstractFactory();
	IConfiguration* EConfig = new EnemyOrcConfig();
	auto EFactory = new EnemyFactory(EConfig);
	IConfiguration* ItConfig = new ItemOrcConfig();
	auto ItFactory = new ItemFactory(ItConfig);
	MyFactory->SetFactories(EFactory, ItFactory);
	cout << MyFactory->CreateEnemy("EnemyMelee")->Welcome() << endl;
	cout << MyFactory->CreateEnemy("EnemyRange")->Welcome() << endl;
	cout << MyFactory->CreateItem("ItemMelee")->Welcome() << endl;
	cout << MyFactory->CreateItem("ItemRange")->Welcome() << endl;
	
	cout << "=================GOBLIN==================" << endl;
	EConfig = new EnemyGoblinConfig();
	EFactory = new EnemyFactory(EConfig);
	ItConfig = new ItemGoblinConfig();
	ItFactory = new ItemFactory(ItConfig);
	MyFactory->SetFactories(EFactory, ItFactory);
	cout << MyFactory->CreateEnemy("EnemyMelee")->Welcome() << endl;
	cout << MyFactory->CreateEnemy("EnemyRange")->Welcome() << endl;
	cout << MyFactory->CreateItem("ItemMelee")->Welcome() << endl;
	cout << MyFactory->CreateItem("ItemRange")->Welcome() << endl;

	cout << "==============EXAMPLE FRUIT===============" << endl;
	auto config = new FruitConfig();
	auto factory = new FruitFactory(config);
	cout << factory->Create("Apple")->Welcome() << endl;
	cout << factory->Create("Orange")->Welcome() << endl;

	return 0;
}