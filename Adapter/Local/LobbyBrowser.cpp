#include "Lobby.h"
#include "LobbyBrowser.h"
#include<iostream>

void LobbyBrowser::GetServers(vector<Lobby*>& Lobbies){
	cout << "Servers found in local network" << endl;
	for (int i = 0; i < 3; i++) {
		Lobby* NewLobby = new Lobby();
		NewLobby->SetIP("192.168.100." + to_string(i+10));
		Lobbies.push_back(NewLobby);
	}
}