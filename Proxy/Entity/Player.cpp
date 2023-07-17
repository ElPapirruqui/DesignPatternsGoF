#include "Player.h"
#include "../Components/Attack/AttackComponent.h"
#include "../Components/Health/HealthComponent.h"

Player::Player() {
	PAttackComp = static_cast<AttackComponent*>(AddComponent(new AttackComponent(10)));
	PHealthComp = static_cast<HealthComponent*>(AddComponent(new HealthComponent(100)));
}

void Player::Attack(IEntity* Target) {
	PAttackComp->Attack(Target);
}

void Player::Damage(int Ammount) {
	PHealthComp->Damage(Ammount);
}