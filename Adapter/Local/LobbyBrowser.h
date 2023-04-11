#pragma once
#include<vector>

using namespace std;

class Lobby;

class LobbyBrowser {
public:
	virtual void GetServers(vector<Lobby*>& Lobbies);
};