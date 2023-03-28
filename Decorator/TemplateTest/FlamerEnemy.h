#pragma once
#include "IDecorator.h"
#include "IFlamer.h"

class FlamerEnemy : public IDecorator, IFlamer {
public:
	FlamerEnemy(IEnemy* NewEnemy);
	void Attack() override;
protected:
	void BreathFire() override;
};