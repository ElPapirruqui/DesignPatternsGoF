#pragma once
#include "../Composite/Component.h"
#include "../Composite/Composite.h"
#include<string>

using namespace std;

class Property;

class Weapon : public Composite, public Component {
public:
	Weapon(string NewName, int NewDamage);
	virtual ~Weapon();
	void ApplyDamage();
	int GetDamage();
	void AddProperty(Property* NewProperty);
private:
	int BaseDamage;
	string Name;
};