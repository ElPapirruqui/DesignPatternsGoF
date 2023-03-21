#pragma once
#include "EnemyConfiguration.h"
#include "IEnemy.h"
#include<vector>

using namespace std;

class EnemyFactory {
public:
	EnemyFactory(EnemyConfiguration* NewEnemyConfig);
	~EnemyFactory();
private:
	EnemyConfiguration* EnemyConfig;
};