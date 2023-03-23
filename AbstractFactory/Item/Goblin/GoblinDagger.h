#pragma once
#include "../IItem.h"

class GoblinDagger : public IItem {
public:
	string Welcome() override;
	static string Type;
};