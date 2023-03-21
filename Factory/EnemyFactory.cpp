#include "EnemyFactory.h"

EnemyFactory::EnemyFactory(EnemyConfiguration* NewEnemyConfig):EnemyConfig(NewEnemyConfig){}

EnemyFactory::~EnemyFactory() {
	delete EnemyConfig;
}