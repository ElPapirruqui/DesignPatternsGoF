#include "../Health/HealthComponent.h"
#include "../../Entity/IEntity.h"
#include "AttackComponent.h"

AttackComponent::AttackComponent(int NewDamage) :Damage(NewDamage) {}

void AttackComponent::Attack(IEntity* Target) {
	Target->Damage(Damage);
}