#include "EnemyProxy.h"
#include "HealthProxy.h"
#include "AttackProxy.h"
#include<iostream>
#include<string>

using namespace std;

EnemyProxy::EnemyProxy() {
	EAttackComp = static_cast<AttackComponent*>(AddComponent(new AttackProxy(20)));
	EHealthComp = static_cast<HealthComponent*>(AddComponent(new HealthProxy(150)));
}

void EnemyProxy::Attack(IEntity* Target) {
	cout << "Enemy is attacking..." << endl;
	Enemy::Attack(Target);
}

void EnemyProxy::Damage(int Ammount) {
	cout << "Enemy is getting damaged..." << endl;
	Enemy::Damage(Ammount);
}