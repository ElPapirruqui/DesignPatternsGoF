#include "../Downloaded/SteamLobby.h"
#include "SteamLobbyAdapter.h"
#include<iostream>

using namespace std;

SteamLobbyAdapter::SteamLobbyAdapter(SteamLobby* NewAdapter):Adapter(NewAdapter){}

void SteamLobbyAdapter::JoinLobby() {
	cout << "Lobby Adapter" << endl;
	Adapter->JoinSteamLobby();
}