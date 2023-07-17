#pragma once
#include "Property.h"

class Stun : public Property {
public:
	Stun(int NewQuantity, int NewChances, int NewDuration) :Property(NewQuantity, NewChances, NewDuration){}
	void Calculate() override;
};