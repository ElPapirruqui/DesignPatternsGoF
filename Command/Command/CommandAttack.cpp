#include "CommandAttack.h"
#include "../Player/Player.h"

CommandAttack::CommandAttack(Player* NewPlayer):CurrentPlayer(NewPlayer) {}

void CommandAttack::Execute() {
	CurrentPlayer->Attack();
}