#pragma once
#include "../Maker/Maker.h"
#include "EnemyMelee.h"
#include "EnemyRange.h"

class MyEnemyConfig : public Maker {
public:
	MyEnemyConfig() {
		Add<EnemyMelee>();
		Add<EnemyRange>();
	}
};