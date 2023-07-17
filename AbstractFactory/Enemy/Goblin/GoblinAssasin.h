#pragma once
#include "../IEnemy.h"

class GoblinAssasin : public IEnemy {
public:
	string Welcome() override;
	static string Type;
};