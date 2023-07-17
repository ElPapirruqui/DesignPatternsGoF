#pragma once
#include "../IConfiguration.h"
#include "../../Item/Goblin/GoblinDagger.h"
#include "../../Item/Goblin/GoblinStaff.h"

class ItemGoblinConfig : public IConfiguration {
public:
	ItemGoblinConfig() {
		Add<GoblinDagger>();
		Add<GoblinStaff>();
	}
};