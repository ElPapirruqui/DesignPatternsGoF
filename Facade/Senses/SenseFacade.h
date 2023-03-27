#pragma once
#include<vector>

using namespace std;

class IEntity;

class SenseFacade {
public:
	SenseFacade(IEntity* NewOwner);
	void GetEntitiesInSight(vector<IEntity*>& OutEnemiesInSight);
	int EmitSound(int Radius);
private:
	vector<IEntity*> EntitiesInSight;
	IEntity* Owner;
};