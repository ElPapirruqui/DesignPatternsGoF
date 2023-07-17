#include "SteamLobby.h"
#include<iostream>

using namespace std;

SteamLobby::SteamLobby(string Host):HostName(Host){}

void SteamLobby::JoinSteamLobby() {
	cout << "Connects to " + HostName + " Steam Lobby." << endl;
}