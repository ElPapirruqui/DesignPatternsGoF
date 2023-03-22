#pragma once
#include "IEnemy.h"

class EnemyMelee : public IEnemy {
public:
	EnemyMelee();
	~EnemyMelee() override;
	string Welcome() override;
};