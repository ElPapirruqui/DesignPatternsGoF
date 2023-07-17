#include "CommandMove.h"
#include "../Player/Player.h"

CommandMove::CommandMove(Player* NewPlayer) :CurrentPlayer(NewPlayer) {}

void CommandMove::Execute() {
	CurrentPlayer->Move();
}