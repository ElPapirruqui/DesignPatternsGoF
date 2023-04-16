#include "Properties/Property.h"
#include "Weapon.h"
#include<iostream>

using namespace std;

Weapon::Weapon(string NewName, int NewDamage):BaseDamage(NewDamage),Name(NewName){}

Weapon::~Weapon() {}

void Weapon::ApplyDamage() {
	cout << "Weapon: " << Name << endl;
	auto Children = GetChildren();
	for (Component* Child : Children) {
		Property* Prop = dynamic_cast<Property*>(Child);
		Prop->Calculate();
	}
	cout << "" << endl;
}

int Weapon::GetDamage() {
	return BaseDamage;
}

void Weapon::AddProperty(Property* NewProperty) {
	Component* PropComp = dynamic_cast<Component*>(NewProperty);
	AddComponent(NewProperty);
}