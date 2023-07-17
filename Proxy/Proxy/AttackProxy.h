#pragma once
#include "../Components/Attack/AttackComponent.h"

class AttackProxy : public AttackComponent {
public:
	AttackProxy(int NewDamage);
	void Attack(IEntity* Target) override;
};