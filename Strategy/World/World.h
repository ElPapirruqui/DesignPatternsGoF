#pragma once
#include<vector>
#include "../Helpers/Random.h"
#include "../Struct/Vector3.h"

using namespace std;

class IEntity;

class World {
public:
	vector<IEntity*>& GetAllEntities();
	template<class T>
	void PopulateWorld(int MinEntities, int MaxEntities){
		int RandomQuantity = Random::Get()->RandomInt(MinEntities, MaxEntities);
		for (int i = MinEntities; i <= RandomQuantity; i++) {
			Entities.push_back(new T());
		}
	};
	IEntity* GetRandomEntity();
	void GetEntitiesInRadius(vector<IEntity*>& Entities, Vector3 Position, int Radius);
	static World* GetCurrentWorld();
	void SetDimension(Vector3 NewDimension);
	Vector3 GetDimension();
private:
	World() = default;
	vector<IEntity*> Entities;
	static World* CurrentWorld;
	Vector3 Dimension;
};