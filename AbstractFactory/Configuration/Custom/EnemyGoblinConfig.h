#pragma once
#include "../IConfiguration.h"
#include "../../Enemy/Goblin/GoblinAssasin.h"
#include "../../Enemy/Goblin/GoblinMage.h"

class EnemyGoblinConfig : public IConfiguration {
public:
	EnemyGoblinConfig() {
		Add<GoblinAssasin>();
		Add<GoblinMage>();
	}
};