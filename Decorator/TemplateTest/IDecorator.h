#pragma once
#include "IEnemy.h"

class IDecorator : public IEnemy {
public:
	IDecorator(IEnemy* NewEnemy);
protected:
	IEnemy* DecoratedEnemy;
};