#pragma once
#include "../IConfiguration.h"
#include "../../Enemy/Orc/OrcWarrior.h"
#include "../../Enemy/Orc/OrcArcher.h"

class EnemyOrcConfig : public IConfiguration {
public:
	EnemyOrcConfig() {
		Add<OrcWarrior>();
		Add<OrcArcher>();
	}
};