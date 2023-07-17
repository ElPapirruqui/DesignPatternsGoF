#pragma once
#include "Property.h"

class Ice : public Property {
public:
	Ice(int NewQuantity, int NewChances, int NewDuration) :Property(NewQuantity, NewChances, NewDuration) {}
	void Calculate() override;
};