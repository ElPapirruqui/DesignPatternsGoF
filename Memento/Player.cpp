#include "Memento.h"
#include "./Struct/Properties.h"
#include "Player.h"
#include<iostream>

using namespace std;

void Player::AddGold(int NewGold) {
	Gold += NewGold;
	Log("Gold Added");
}

void Player::AddExperience(int NewExperience) {
	Experience += NewExperience;
	Log("Experience Added");
}

Memento* Player::TakeSnapshot() {
	Properties Props;
	Props.Experience = Experience;
	Props.Gold = Gold;
	Log("Take Snapshot");
	return new Memento(Props);
}

void Player::Restore(Memento* NewMemento) {
	Properties Props = NewMemento->GetSaved();
	Gold = Props.Gold;
	Experience = Props.Experience;
	Log("Restore");
}

void Player::Log(string Title) {
	cout << "" << endl;
	cout << "--- " + Title + " ---" << endl;
	cout << "Experience: " + to_string(Experience) << endl;
	cout << "Gold: " + to_string(Gold) << endl;
	cout << "" << endl;
}