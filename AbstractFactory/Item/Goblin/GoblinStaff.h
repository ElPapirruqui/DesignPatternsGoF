#pragma once
#include "../IItem.h"

class GoblinStaff : public IItem {
public:
	string Welcome() override;
	static string Type;
};