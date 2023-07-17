#pragma once
#include "IAttack.h"

class AttackFireball : public IAttack {
public:
	AttackFireball(IEntity* NewTarget);
	void Attack() override;
};