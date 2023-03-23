#pragma once
#include "../IConfiguration.h"
#include "../../Item/Orc/OrcBow.h"
#include "../../Item/Orc/OrcSword.h"

class ItemOrcConfig : public IConfiguration {
public:
	ItemOrcConfig() {
		Add<OrcBow>();
		Add<OrcSword>();
	}
};