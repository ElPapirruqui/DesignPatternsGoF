#include "PlayerProxy.h"
#include "HealthProxy.h"
#include "AttackProxy.h"
#include<iostream>
#include<string>

using namespace std;

PlayerProxy::PlayerProxy() {
	PAttackComp = static_cast<AttackComponent*>(AddComponent(new AttackProxy(10)));
	PHealthComp = static_cast<HealthComponent*>(AddComponent(new HealthProxy(100)));
}

void PlayerProxy::Attack(IEntity* Target) {
	cout << "Player is attacking..." << endl;
	Player::Attack(Target);
}

void PlayerProxy::Damage(int Ammount) {
	cout << "Player is getting damaged..." << endl;
	Player::Damage(Ammount);
}