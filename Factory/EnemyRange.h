#pragma once
#include "IEnemy.h"

class EnemyRange : public IEnemy {
public:
	EnemyRange();
	~EnemyRange() override;
	string Welcome() override;
};