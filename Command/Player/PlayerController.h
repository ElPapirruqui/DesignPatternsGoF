#pragma once
#include<string>
#include<map>

using namespace std;
class ICommand;

class PlayerController {
public:
	void BindCommand(string CommandName, ICommand* NewCommand);
	void CallCommand(string CommandName);
private:
	map<string, ICommand*> Commands;
};