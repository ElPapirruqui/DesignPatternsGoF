#pragma once
#include<string>

using namespace std;

class Lobby {
public:
	virtual void JoinLobby();
	void SetIP(string NewIP);
private:
	string DirectIP;
};