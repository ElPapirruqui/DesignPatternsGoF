#pragma once
#include<string>

using namespace std;

class AbstractFactory {
public:
	void SetFactories(class EnemyFactory* NewEnemyFactory, class ItemFactory* NewItemFactory);
	class IEnemy* CreateEnemy(string EnemyType);
	class IItem* CreateItem(string ItemType);
private:
	EnemyFactory* MyEnemyFactory;
	ItemFactory* MyItemFactory;
};