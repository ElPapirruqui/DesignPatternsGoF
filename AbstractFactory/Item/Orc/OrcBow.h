#pragma once
#include "../IItem.h"

class OrcBow : public IItem {
public:
	string Welcome() override;
	static string Type;
};