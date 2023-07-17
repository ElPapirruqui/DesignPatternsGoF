#pragma once
#include "IEntity.h"

class AttackComponent;
class HealthComponent;

class Player : public IEntity {
public:
	Player();
	void Attack(IEntity* Target) override;
	void Damage(int Ammount) override;
	AttackComponent* PAttackComp;
	HealthComponent* PHealthComp;
};