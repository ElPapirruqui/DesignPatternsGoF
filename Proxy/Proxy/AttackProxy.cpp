#include "AttackProxy.h"
#include<iostream>
#include<string>

using namespace std;

AttackProxy::AttackProxy(int NewDamage) :AttackComponent(NewDamage) {}

void AttackProxy::Attack(IEntity* Target) {
	cout << "Attacked the Target with damage: " + to_string(Damage) << endl;
	AttackComponent::Attack(Target);
}