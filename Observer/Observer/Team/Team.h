#pragma once
#include "../Observer.h"
#include<vector>
#include<string>

using namespace std;

class Subject;
class Player;

class Team : public Observer{
public:
	Team(Subject* NewSubject, string NewName);
	void AddFlag(Player* Scorer);
	void Update() override;
	void AddMember(Player* NewPlayer);
	string& GetName();
	int& GetScore();
private:
	int Score;
	vector<Player*> Members;
	string Name;
};