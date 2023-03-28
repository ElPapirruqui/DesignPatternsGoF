#pragma once
#include "IEnemy.h"

class EnemyDecorator : public IEnemy{
public:
	EnemyDecorator(IEnemy* NewEnemy);
protected:
	IEnemy* DecoratedEnemy;
};