#pragma once
#include "../IEnemy.h"

class OrcWarrior : public IEnemy {
public:
	string Welcome() override;
	static string Type;
};