#include "Player/Player.h"
#include "Player/PlayerController.h"
#include "Command/CommandAttack.h"
#include "Command/CommandJump.h"
#include "Command/CommandMove.h"
#include<iostream>

using namespace std;

int main() {

	Player* MyPlayer = new Player();
	PlayerController* MyController = new PlayerController();

	MyController->BindCommand("Attack", new CommandAttack(MyPlayer));
	MyController->BindCommand("Jump", new CommandJump(MyPlayer));
	MyController->BindCommand("Move", new CommandMove(MyPlayer));

	MyController->CallCommand("Attack");
	MyController->CallCommand("Jump");
	MyController->CallCommand("Move");

	return 0;
}