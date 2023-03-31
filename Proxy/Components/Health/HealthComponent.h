#pragma once
#include "../IComponent.h"

class HealthComponent : public IComponent {
public:
	HealthComponent(int NewHealth);
	virtual void Damage(int Ammount);
	int Health;
};