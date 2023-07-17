#pragma once
#include<vector>

using namespace std;

class Memento;
class Player;

class Game {
public:
	Game();
	void AddExperieceToPlayer(int NewExperience);
	void AddGoldToPlayer(int NewGold);
	int Save();
	void Load(int ID);
private:
	vector<Memento*> History;
	Player* CurrentPlayer;
};