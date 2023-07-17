#include "Player.h"
#include "Game.h"

Game::Game() {
	CurrentPlayer = new Player();
}

void Game::AddExperieceToPlayer(int NewExperience) {
	CurrentPlayer->AddExperience(NewExperience);
}

void Game::AddGoldToPlayer(int NewGold) {
	CurrentPlayer->AddGold(NewGold);
}

int Game::Save() {
	History.push_back(CurrentPlayer->TakeSnapshot());
	return History.size() - 1;
}

void Game::Load(int ID) {
	CurrentPlayer->Restore(History[ID]);
}