#pragma once
#include<string>

using namespace std;

class Team;

class Player{
public:
	Player(Team* NewTeam, string NewName);
	void CaptureFlag();
	void CheckStatus(Team* WinnerTeam, Player* Scorer);
	string Name = "";
private:
	string CheckPlayerStatus(bool bIsWinning, Player* Scorer);
	Team* MyTeam;
};