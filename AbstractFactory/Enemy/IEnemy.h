#pragma once
#include "../Configuration/IObject.h"

class IEnemy : public IObject {
public:
	IEnemy();
	virtual ~IEnemy();
	virtual string Welcome() = 0;
};