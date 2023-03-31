#include "Enemy.h"
#include "../Components/Attack/AttackComponent.h"
#include "../Components/Health/HealthComponent.h"

Enemy::Enemy() {
	EAttackComp = static_cast<AttackComponent*>(AddComponent(new AttackComponent(10)));
	EHealthComp = static_cast<HealthComponent*>(AddComponent(new HealthComponent(100)));
}

void Enemy::Attack(IEntity* Target) {
	EAttackComp->Attack(Target);
}

void Enemy::Damage(int Ammount) {
	EHealthComp->Damage(Ammount);
}