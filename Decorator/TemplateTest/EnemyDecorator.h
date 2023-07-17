#pragma once
#include "IEnemy.h"
#include "IDecorator.h"

class EnemyDecorator : public IDecorator {
public:
	template <class T>
	static T* ApplyDecorator(IEnemy* NewEnemy) {
		return new T(NewEnemy);
	}
};