#pragma once
#include "IDecorator.h"
#include "IFly.h"

class FlyingEnemy : public IDecorator, IFly {
public:
	FlyingEnemy(IEnemy* NewEnemy);
	void Move() override;
protected:
	void Fly() override;
};