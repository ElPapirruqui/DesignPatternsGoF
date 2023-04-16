#pragma once
#include "Property.h"

class Critic : public Property {
public:
	Critic(int NewQuantity, int NewChances, int NewDuration) :Property(NewQuantity, NewChances, NewDuration) {}
	void Calculate() override;
};