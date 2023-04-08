#include "Builder/Player.h"
#include "Builder/PlayerBuilder.h"
#include "Builder/Director.h"
#include<vector>
#include<iostream>
#include<string>

using namespace std;

int main() {

	Director* MyDirector = new Director();
	vector<Player*> Players;
	Players.push_back(MyDirector->CreateCleric());
	Players.push_back(MyDirector->CreateArcher());
	Players.push_back(MyDirector->CreateMage());
	Players.push_back(MyDirector->CreateThief());
	Players.push_back(MyDirector->CreateWarrior());

	for (Player* CurrentPlayer : Players) {
		auto PB = static_cast<PlayerBuilder*>(CurrentPlayer);
		cout << "Player " + PB->Name() << endl;
		cout << "-Level: " + to_string(PB->Level()) << endl;
		cout << "-Gold: " + to_string(PB->Gold()) << endl;
		cout << "-Class: " + PB->Class() << endl;
		cout << "-Strength: " + to_string(PB->Strength()) << endl;
		cout << "-Intelligence: " + to_string(PB->Intelligence()) << endl;
		cout << "-Agility: " + to_string(PB->Agility()) << endl;
		cout << "-Health: " + to_string(PB->Health()) << endl;
		cout << "-Armor: " + to_string(PB->Armor()) << endl;
		cout << "" << endl;
	}

	return 0;
}