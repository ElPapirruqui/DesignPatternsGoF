#pragma once
#include "ICommand.h"

class Player;

class CommandAttack : public ICommand {
public:
	CommandAttack(Player* NewPlayer);
	void Execute() override;
private:
	Player* CurrentPlayer;
};