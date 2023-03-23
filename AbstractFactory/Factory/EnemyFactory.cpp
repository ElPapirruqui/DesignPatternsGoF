#include "../Configuration/IConfiguration.h"
#include "EnemyFactory.h"

EnemyFactory::EnemyFactory(IConfiguration* NewConfig) :IFactory<IEnemy>(NewConfig) {}

IEnemy* EnemyFactory::Create(string ObjectType) {
	IEnemy* NewEnemy = IFactory::Create(ObjectType);
	return NewEnemy;
}