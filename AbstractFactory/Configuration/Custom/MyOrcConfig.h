#pragma once
#include "../IConfiguration.h"
#include "../../Enemy/Orc/OrcWarrior.h"
#include "../../Enemy/Orc/OrcArcher.h"

class MyOrcConfig : public IConfiguration {
public:
	MyOrcConfig() {
		Add<OrcWarrior>();
		Add<OrcArcher>();
	}
};