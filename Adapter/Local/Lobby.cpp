#include "Lobby.h"
#include<iostream>

using namespace std;

void Lobby::JoinLobby() {
	cout << "Connects to Server IP: " + DirectIP << endl;
}

void Lobby::SetIP(string NewIP) {
	DirectIP = NewIP;
}