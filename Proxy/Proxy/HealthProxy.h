#pragma once
#include "../Components/Health/HealthComponent.h"

class HealthProxy : public HealthComponent {
public:
	HealthProxy(int NewHealth);
	void Damage(int Ammount) override;
};