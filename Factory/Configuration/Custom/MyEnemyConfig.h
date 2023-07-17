#pragma once
#include "../IConfiguration.h"
#include "EnemyMelee.h"
#include "EnemyRange.h"

class MyEnemyConfig : public IConfiguration {
public:
	MyEnemyConfig() {
		Add<EnemyMelee>();
		Add<EnemyRange>();
	}
};