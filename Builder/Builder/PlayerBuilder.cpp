#include "PlayerBuilder.h"

PlayerBuilder* PlayerBuilder::Name(string NewName) {
	_Name = NewName;
	return this;
}

PlayerBuilder* PlayerBuilder::Level(int NewLevel) {
	_Level = NewLevel;
	return this;
}

PlayerBuilder* PlayerBuilder::Gold(int NewGold) {
	_Gold = NewGold;
	return this;
}

PlayerBuilder* PlayerBuilder::Class(string NewClass) {
	_Class = NewClass;
	return this;
}

PlayerBuilder* PlayerBuilder::Strength(int NewStrength) {
	_Strength = NewStrength;
	return this;
}

PlayerBuilder* PlayerBuilder::Intelligence(int NewIntelligence) {
	_Intelligence = NewIntelligence;
	return this;
}

PlayerBuilder* PlayerBuilder::Agility(int NewAgility) {
	_Agility = NewAgility;
	return this;
}

PlayerBuilder* PlayerBuilder::Health(int NewHealth) {
	_Health = NewHealth;
	return this;
}

PlayerBuilder* PlayerBuilder::Armor(int NewArmor) {
	_Armor = NewArmor;
	return this;
}

string PlayerBuilder::Name() {
	return _Name;
}

int PlayerBuilder::Level() {
	return _Level;
}

int PlayerBuilder::Gold() {
	return _Gold;
}

string PlayerBuilder::Class() {
	return _Class;
}

int PlayerBuilder::Strength() {
	return _Strength;
}

int PlayerBuilder::Intelligence() {
	return _Intelligence;
}

int PlayerBuilder::Agility() {
	return _Agility;
}

int PlayerBuilder::Health() {
	return _Health;
}

int PlayerBuilder::Armor() {
	return _Armor;
}

Player* PlayerBuilder::Create() {
	return static_cast<Player*>(this);
}
