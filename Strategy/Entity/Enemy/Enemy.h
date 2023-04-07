#pragma once
#include "../Entity.h"

class AttackComponent;
class HealthComponent;

class Enemy : public IEntity {
public:
	Enemy();
	AttackComponent* EAttackComp;
	HealthComponent* EHealthComp;
};