#pragma once
#include<vector>
#include<string>

using namespace std;

class Observer;
class Team;
class Player;

class Score {
public:
	Score(vector<Observer*>& Teams);
	void Show();
	Team* GetWinner();
	void SetScorer(Player* NewScorer);
	Player* GetScorer();
private:
	void CheckWinner(Team* CurrentTeam);
	vector<Observer*>& ScoreTeams;
	Team* Winner = nullptr;
	Player* Scorer;
};