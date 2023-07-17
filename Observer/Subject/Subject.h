#pragma once
#include<vector>
#include<map>
#include<string>

using namespace std;

class Observer;
class Team;
class Score;
class Player;

class Subject {
public:
	Subject();
	void UpdateState(Player* Scorer);
	Score* GetState();
	void AddObserver(Observer* NewObserver);
	void NotifyAll();
private:
	vector<Observer*> Observers;
	Score* CurrentScore;
};