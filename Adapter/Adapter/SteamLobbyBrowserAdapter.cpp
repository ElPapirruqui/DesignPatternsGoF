#include "../Downloaded/SteamLobby.h"
#include "../Downloaded/SteamLobbyBrowser.h"
#include "SteamLobbyAdapter.h"
#include "SteamLobbyBrowserAdapter.h"

SteamLobbyBrowserAdapter::SteamLobbyBrowserAdapter(SteamLobbyBrowser* NewAdapter):Adapter(NewAdapter) {}

void SteamLobbyBrowserAdapter::GetServers(vector<Lobby*>& Lobbies) {
	vector<SteamLobby> SteamLobbies = Adapter->FindSteamLobbies(240, false, 10, ERange::Far);
	for (SteamLobby& SLobby : SteamLobbies) {
		SteamLobbyAdapter* SLAdapter = new SteamLobbyAdapter(new SteamLobby(SLobby));
		Lobbies.push_back(SLAdapter);
	}
}