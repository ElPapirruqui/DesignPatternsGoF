#pragma once
#include "IClonable.h"

class IEntity : public IClonable<IEntity> {
public:
	IEntity* Clone() override { return nullptr; };
};

typedef IClonable<IEntity> Entity;