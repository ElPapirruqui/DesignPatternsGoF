#pragma once
#include "../Entity/Enemy.h"

class EnemyProxy : public Enemy {
public:
	EnemyProxy();
	void Attack(IEntity* Target) override;
	void Damage(int Ammount) override;
};