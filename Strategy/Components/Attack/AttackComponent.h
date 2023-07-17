#pragma once
#include "../IComponent.h"

class IAttack;

class AttackComponent : public IComponent {
public:
	AttackComponent();
	virtual void Attack(IAttack* NewAttack);
};