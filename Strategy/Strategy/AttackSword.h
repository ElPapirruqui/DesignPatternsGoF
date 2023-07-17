#pragma once
#include "IAttack.h"

class AttackSword : public IAttack {
public:
	AttackSword(IEntity* NewTarget);
	void Attack() override;
};