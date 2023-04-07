#include "../Entity/Entity.h"
#include "World.h"

World* World::CurrentWorld = nullptr;

World* World::GetCurrentWorld() {
	if (CurrentWorld == nullptr) {
		CurrentWorld = new World();
	}
	return CurrentWorld;
}

vector<IEntity*>& World::GetAllEntities() {
	return Entities; 
}

IEntity* World::GetRandomEntity() {
	int Index = Random::Get()->RandomInt(0, Entities.size() - 1);
	return Entities[Index];
}

void World::GetEntitiesInRadius(vector<IEntity*>& OutEntities, Vector3 Position, int Radius) {
	for (IEntity* Ent : Entities) {
		Vector3 EPos = Ent->GetCurrentPosition();
		if (Vector3::Distance(EPos, Position) <= Radius) {
			OutEntities.push_back(Ent);
		}
	}
}

void World::SetDimension(Vector3 NewDimension) {
	Dimension = NewDimension;
}

Vector3 World::GetDimension() {
	return Dimension;
}