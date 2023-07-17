#pragma once
#include "../Entity/Player.h"

class PlayerProxy : public Player {
public:
	PlayerProxy();
	void Attack(IEntity* Target) override;
	void Damage(int Ammount) override;
};