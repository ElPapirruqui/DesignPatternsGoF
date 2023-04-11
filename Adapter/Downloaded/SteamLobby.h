#pragma once
#include<string>

using namespace std;

class SteamLobby {
public:
	SteamLobby(string Host);
	void JoinSteamLobby();
private:
	string HostName;
};