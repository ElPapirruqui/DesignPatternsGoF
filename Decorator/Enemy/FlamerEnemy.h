#pragma once
#include "EnemyDecorator.h"
#include "IFlamer.h"

class FlamerEnemy : public EnemyDecorator, IFlamer {
public:
	FlamerEnemy(IEnemy* NewEnemy);
	void Attack() override;
protected:
	void BreathFire() override;
};