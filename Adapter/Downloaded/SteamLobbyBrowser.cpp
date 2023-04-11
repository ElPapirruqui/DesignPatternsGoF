#include "SteamLobby.h"
#include "SteamLobbyBrowser.h"
#include<iostream>

vector<SteamLobby> SteamLobbyBrowser::FindSteamLobbies(int GameID, bool bOnlyFriends = false, int MaxPlayers = 10, ERange Range = ERange::Near) {
	vector<SteamLobby> SteamLobbies;
	cout << "Looking for Steam servers..." << endl;
	for (int i = 0; i < 3; i++) {
		SteamLobby NewLobby("Steam UserID: "+to_string(i));
		SteamLobbies.push_back(NewLobby);
	}
	return SteamLobbies;
}