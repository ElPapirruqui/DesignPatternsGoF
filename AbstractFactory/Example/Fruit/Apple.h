#pragma once
#include "IFruit.h"

class Apple : public IFruit {
public:
	string Welcome() override;
	static string Type;
};