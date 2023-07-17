#include "Player.h"
#include "../../Components/Attack/AttackComponent.h"
#include "../../Components/Health/HealthComponent.h"

Player::Player() {
	PAttackComp = static_cast<AttackComponent*>(AddComponent(new AttackComponent()));
	PHealthComp = static_cast<HealthComponent*>(AddComponent(new HealthComponent(100)));
}