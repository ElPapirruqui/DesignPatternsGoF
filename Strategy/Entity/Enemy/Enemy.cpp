#include "Enemy.h"
#include "../../Components/Attack/AttackComponent.h"
#include "../../Components/Health/HealthComponent.h"

Enemy::Enemy() {
	EAttackComp = static_cast<AttackComponent*>(AddComponent(new AttackComponent()));
	EHealthComp = static_cast<HealthComponent*>(AddComponent(new HealthComponent(100)));
}