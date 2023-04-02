#pragma once
#include<string>

using namespace std;

class Memento;

class Player {
public:
	void AddGold(int NewGold);
	void AddExperience(int NewExperience);
	Memento* TakeSnapshot();
	void Restore(Memento* NewMemento);
private:
	int Gold = 0;
	int Experience = 0;
	void Log(string Title);
};