#include "EnemyFactory.h"
#include "ItemFactory.h"
#include "AbstractFactory.h"

void AbstractFactory::SetFactories(EnemyFactory* NewEnemyFactory, ItemFactory* NewItemFactory) {
	MyEnemyFactory = NewEnemyFactory;
	MyItemFactory = NewItemFactory;
}

IEnemy* AbstractFactory::CreateEnemy(string EnemyType) {
	return MyEnemyFactory->Create(EnemyType);
}

IItem* AbstractFactory::CreateItem(string ItemType) {
	return MyItemFactory->Create(ItemType);
}