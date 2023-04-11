#pragma once
#include<vector>

enum class ERange{Near, Far, World};

using namespace std;

class SteamLobby;

class SteamLobbyBrowser {
public:
	vector<SteamLobby> FindSteamLobbies(int GameID, bool bOnlyFriends, int MaxPlayers, ERange Range);
};