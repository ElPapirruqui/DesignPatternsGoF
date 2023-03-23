#pragma once
#include "../IConfiguration.h"
#include "../../Enemy/Goblin/GoblinAssasin.h"
#include "../../Enemy/Goblin/GoblinMage.h"

class MyGoblinConfig : public IConfiguration {
public:
	MyGoblinConfig() {
		Add<GoblinAssasin>();
		Add<GoblinMage>();
	}
};