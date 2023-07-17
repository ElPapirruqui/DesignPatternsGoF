#pragma once
#include "../../Configuration/IObject.h"

class IFruit : public IObject {
public:
	IFruit();
	virtual ~IFruit();
	virtual string Welcome() = 0;
};