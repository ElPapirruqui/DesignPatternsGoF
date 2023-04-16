#pragma once
#include "Property.h"

class Fire : public Property {
public:
	Fire(int NewQuantity, int NewChances, int NewDuration) :Property(NewQuantity, NewChances, NewDuration) {}
	void Calculate() override;
};