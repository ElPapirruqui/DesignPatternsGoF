#pragma once
#include "../Components/Holder/Holder.h"
#include "IMovable.h"

class IEntity : public Holder, public IMovable {
public:
	IEntity();
	virtual ~IEntity();
};