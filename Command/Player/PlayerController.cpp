#include "../Command/ICommand.h"
#include "PlayerController.h"

void PlayerController::BindCommand(string CommandName, ICommand* NewCommand) {
	Commands[CommandName] = NewCommand;
}

void PlayerController::CallCommand(string CommandName) {
	Commands[CommandName]->Execute();
}