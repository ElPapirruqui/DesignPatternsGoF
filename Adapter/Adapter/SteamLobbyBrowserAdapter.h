#pragma once
#include "../Local/LobbyBrowser.h"

class Lobby;
class SteamLobbyBrowser;

class SteamLobbyBrowserAdapter : public LobbyBrowser{
public:
	SteamLobbyBrowserAdapter(SteamLobbyBrowser* NewAdapter);
	void GetServers(vector<Lobby*>& Lobbies) override;
private:
	SteamLobbyBrowser* Adapter;
};