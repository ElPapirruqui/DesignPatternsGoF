#pragma once
#include "../IEnemy.h"

class OrcArcher : public IEnemy {
public:
	string Welcome() override;
	static string Type;
};