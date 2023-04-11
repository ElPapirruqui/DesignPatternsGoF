#pragma once
#include "../Local/Lobby.h"

class SteamLobby;

class SteamLobbyAdapter : public Lobby{
public:
	SteamLobbyAdapter(SteamLobby* NewAdapter);
	void JoinLobby() override;
private:
	SteamLobby* Adapter;
};