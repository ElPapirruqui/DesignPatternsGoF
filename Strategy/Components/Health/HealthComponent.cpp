#include "HealthComponent.h"

HealthComponent::HealthComponent(int NewHealth):Health(NewHealth){}

void HealthComponent::Damage(int Ammount) {
	Health -= Ammount;
}