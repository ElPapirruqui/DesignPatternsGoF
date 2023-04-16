#pragma once
#include "Property.h"

class Bleeding : public Property {
public:
	Bleeding(int NewQuantity, int NewChances, int NewDuration) :Property(NewQuantity, NewChances, NewDuration) {}
	void Calculate() override;
};