#include "../Health/HealthComponent.h"
#include "../../Strategy/IAttack.h"
#include "AttackComponent.h"

AttackComponent::AttackComponent(){}

void AttackComponent::Attack(IAttack* NewAttack) {
	NewAttack->Attack();
}