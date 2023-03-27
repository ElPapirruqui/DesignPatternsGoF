#pragma once
#include<vector>
#include "../Helpers/Random.h"

using namespace std;

class IEntity;
typedef vector<IEntity*> EntityList;

class World {
public:
	int HiddingThreshold = 50;
	vector<IEntity*>& GetAllEntities();
	template<class T>
	void PopulateWorld(int MinEntities, int MaxEntities){
		int RandomQuantity = Random::Get()->RandomInt(MinEntities, MaxEntities);
		for (int i = MinEntities; i <= RandomQuantity; i++) {
			Entities.push_back(new T());
		}
	};
	static World* GetCurrentWorld();
	void SetHiddingThreshold(int NewThreshold);
private:
	World() = default;
	vector<IEntity*> Entities;
	static World* CurrentWorld;
};