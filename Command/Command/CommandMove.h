#pragma once
#include "ICommand.h"

class Player;

class CommandMove : public ICommand {
public:
	CommandMove(Player* NewPlayer);
	void Execute() override;
private:
	Player* CurrentPlayer;
};