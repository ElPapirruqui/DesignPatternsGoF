#pragma once
#include "../IComponent.h"

class AttackComponent : public IComponent {
public:
	AttackComponent(int NewDamage);
	virtual void Attack(IEntity* Target);
	int Damage;
};