#pragma once
#include "../Entity.h"

class AttackComponent;
class HealthComponent;

class Player : public IEntity {
public:
	Player();
	AttackComponent* PAttackComp;
	HealthComponent* PHealthComp;
};