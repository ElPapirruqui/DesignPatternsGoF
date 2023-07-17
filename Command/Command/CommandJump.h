#pragma once
#include "ICommand.h"

class Player;

class CommandJump : public ICommand {
public:
	CommandJump(Player* NewPlayer);
	void Execute() override;
private:
	Player* CurrentPlayer;
};