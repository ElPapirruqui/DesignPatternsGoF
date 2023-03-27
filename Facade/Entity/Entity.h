#pragma once
#include "IMovable.h"
#include "../Senses/IHear.h"
#include "../Senses/IVision.h"

class IEntity : public IMovable, public IHear, public IVision {
public:
	virtual ~IEntity() { delete this; };
protected:
	IEntity() = default;
};