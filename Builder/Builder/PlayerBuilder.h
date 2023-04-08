#pragma once
#include<string>
#include "Player.h"

using namespace std;

class PlayerBuilder : public Player {
public:
	Player* Create();
	PlayerBuilder* Name(string NewName);
	PlayerBuilder* Level(int NewLevel);
	PlayerBuilder* Gold(int NewGold);
	PlayerBuilder* Class(string NewClass);
	PlayerBuilder* Strength(int NewStrength);
	PlayerBuilder* Intelligence(int NewIntelligence);
	PlayerBuilder* Agility(int NewAgility);
	PlayerBuilder* Health(int NewHealth);
	PlayerBuilder* Armor(int NewArmor);
	string Name();
	int Level();
	int Gold();
	string Class();
	int Strength();
	int Intelligence();
	int Agility();
	int Health();
	int Armor();
};