#include "HealthProxy.h"
#include<iostream>
#include<string>

using namespace std;

HealthProxy::HealthProxy(int NewHealth) :HealthComponent(NewHealth) {}

void HealthProxy::Damage(int Ammount) {
	HealthComponent::Damage(Ammount);
	cout << "Current Health is: " + to_string(Health) << endl;
}