#pragma once
#include "IFruit.h"

class Orange : public IFruit {
public:
	string Welcome() override;
	static string Type;
};