#include "../Team/Team.h"
#include "../../Subject/Subject.h"
#include "Player.h"
#include<iostream>

Player::Player(Team* NewTeam, string NewName) :MyTeam(NewTeam), Name(NewName) {
	MyTeam->AddMember(this);
}

void Player::CaptureFlag() {
	MyTeam->AddFlag(this);
}

void Player::CheckStatus(Team* WinnerTeam, Player* Scorer) {
	if (WinnerTeam->GetName() == MyTeam->GetName()) {
		cout << Name + ": WE ARE WINNING YAY!!" + CheckPlayerStatus(true, Scorer) << endl;
	}
	else {
		cout << Name + ": " + CheckPlayerStatus(true, Scorer) + "We are losing... " + WinnerTeam->GetName() + " is winning..." << endl;
	}
	cout << "" << endl;
}

string Player::CheckPlayerStatus(bool bIsWinning, Player* Scorer) {
	string MyStatus = "";
	if (Scorer->Name == Name) {
		if (bIsWinning) {
			MyStatus = " AND I DID THE SCORE!";
		}
		else {
			MyStatus = "I scored but... ";
		}
	}
	return MyStatus;
}