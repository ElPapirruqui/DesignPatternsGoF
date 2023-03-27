#include "World.h"

World* World::CurrentWorld = nullptr;

void World::SetHiddingThreshold(int NewThreshold) {
	HiddingThreshold = NewThreshold;
}

World* World::GetCurrentWorld() {
	if (CurrentWorld == nullptr) {
		CurrentWorld = new World();
	}
	return CurrentWorld;
}

EntityList& World::GetAllEntities() {
	return Entities; 
}