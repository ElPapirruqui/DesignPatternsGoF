#include "Local/Lobby.h"
#include "Local/LobbyBrowser.h"
#include "Downloaded/SteamLobbyBrowser.h"
#include "Adapter/SteamLobbyBrowserAdapter.h"
#include "Adapter/SteamLobbyAdapter.h"
#include<vector>

using namespace std;

int main() {
	//LobbyBrowser* MyBrowser = new LobbyBrowser();
	LobbyBrowser* MyBrowser = new SteamLobbyBrowserAdapter(new SteamLobbyBrowser());
	vector<Lobby*> LobbiesFound;
	MyBrowser->GetServers(LobbiesFound);

	LobbiesFound[0]->JoinLobby();
	return 0;
}