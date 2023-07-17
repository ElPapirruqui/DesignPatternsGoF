#include "Game.h"

int main() {

	Game* MyGame = new Game();
	MyGame->AddExperieceToPlayer(100);
	MyGame->AddGoldToPlayer(5);
	MyGame->Save();
	MyGame->AddExperieceToPlayer(50);
	MyGame->AddGoldToPlayer(10);
	MyGame->AddExperieceToPlayer(1000);
	MyGame->AddGoldToPlayer(50);
	MyGame->Save();
	MyGame->Load(0);

	return 0;
}