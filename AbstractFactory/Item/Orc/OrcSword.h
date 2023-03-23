#pragma once
#include "../IItem.h"

class OrcSword : public IItem {
public:
	string Welcome() override;
	static string Type;
};