#pragma once
#include "EnemyDecorator.h"
#include "IFly.h"

class FlyingEnemy : public EnemyDecorator, IFly {
public:
	FlyingEnemy(IEnemy* NewEnemy);
	void Move() override;
protected:
	void Fly() override;
};