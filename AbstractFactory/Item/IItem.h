#pragma once
#include "../Configuration/IObject.h"

class IItem : public IObject {
public:
	IItem();
	virtual ~IItem();
	virtual string Welcome() = 0;
};