#pragma once
#include<vector>

using namespace std;

class Player;
class WorldObject;

class WorldContext {
public:
    ~WorldContext();
    vector<Player*>& GetPlayerList();
    vector<WorldObject*>& GetWorldObjects();
    static WorldContext* GetInstance();
private:
    WorldContext();
    static WorldContext* World;
    vector<Player*> Players();
    vector<WorldObject*> WorldObjects();
};