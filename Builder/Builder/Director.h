#pragma once

class Player;

class Director {
public:
	Player* CreateCleric();
	Player* CreateThief();
	Player* CreateWarrior();
	Player* CreateMage();
	Player* CreateArcher();
};