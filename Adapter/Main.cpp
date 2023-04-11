#include "Local/Lobby.h"
#include "Local/LobbyBrowser.h"
#include "Downloaded/SteamLobbyBrowser.h"
#include "Adapter/SteamLobbyBrowserAdapter.h"
#include "Adapter/SteamLobbyAdapter.h"
#include<vector>

using namespace std;

void local_main() {
	LobbyBrowser* MyBrowser = new LobbyBrowser();
	vector<Lobby*> LobbiesFound;
	MyBrowser->GetServers(LobbiesFound);

	LobbiesFound[0]->JoinLobby();
}

void adapter_main() {
	SteamLobbyBrowserAdapter* MyBrowser = new SteamLobbyBrowserAdapter(new SteamLobbyBrowser());
	vector<Lobby*> LobbiesFound;
	MyBrowser->GetServers(LobbiesFound);

	LobbiesFound[0]->JoinLobby();
}

int main() {
	adapter_main();
	return 0;
}