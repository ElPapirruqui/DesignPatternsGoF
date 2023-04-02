#include "CommandJump.h"
#include "../Player/Player.h"

CommandJump::CommandJump(Player* NewPlayer) :CurrentPlayer(NewPlayer) {}

void CommandJump::Execute() {
	CurrentPlayer->Jump();
}