#include "../Observer/Observer.h"
#include "../Observer/Team/Team.h"
#include "../Observer/Player/Player.h"
#include "Score.h"
#include<iostream>

Score::Score(vector<Observer*>& Teams):ScoreTeams(Teams) {}

void Score::SetScorer(Player* NewScorer) {
	Scorer = NewScorer;
	cout << Scorer->Name + " scored" << endl;
}

Player* Score::GetScorer() {
	return Scorer;
}

void Score::Show(){
	cout << "----- CURRENT SCORES ------" << endl;
	cout << "" << endl;
	for (Observer* Obs : ScoreTeams) {
		Team* CurrentTeam = dynamic_cast<Team*>(Obs);
		string& TeamName = CurrentTeam->GetName();
		int& TeamScore = CurrentTeam->GetScore();
		cout << TeamName + ": " + to_string(TeamScore) << endl;
		CheckWinner(CurrentTeam);
	}
	cout << "---------------" << endl;
	cout << Winner->GetName() + " is winning" << endl;
	cout << "" << endl;
}

void Score::CheckWinner(Team* CurrentTeam) {
	if (Winner == nullptr) {
		Winner = CurrentTeam;
		return;
	}
	if (CurrentTeam->GetScore() > Winner->GetScore()) {
		Winner = CurrentTeam;
	}
}

Team* Score::GetWinner() {
	return Winner;
}