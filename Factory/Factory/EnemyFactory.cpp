#include "../Configuration/IConfiguration.h"
#include "EnemyFactory.h"

EnemyFactory::EnemyFactory(IConfiguration* NewConfig):Configuration(NewConfig){}

EnemyFactory::~EnemyFactory() {}

IEnemy* EnemyFactory::CreateEnemy(string ClassName) {
	EnemyMap& ConfigMap = Configuration->GetMap();
	return ConfigMap[ClassName]();
}