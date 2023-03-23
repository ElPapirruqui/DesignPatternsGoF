#pragma once
#include "../IEnemy.h"

class GoblinMage : public IEnemy {
public:
	string Welcome() override;
	static string Type;
};