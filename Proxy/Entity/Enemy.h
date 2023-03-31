#pragma once
#include "IEntity.h"

class AttackComponent;
class HealthComponent;

class Enemy : public IEntity{
public:
	Enemy();
	void Attack(IEntity* Target) override;
	void Damage(int Ammount) override;
	AttackComponent* EAttackComp;
	HealthComponent* EHealthComp;
};