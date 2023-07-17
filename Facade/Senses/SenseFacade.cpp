#include "../World/World.h"
#include "../Entity/Entity.h"
#include "SenseFacade.h"

SenseFacade::SenseFacade(IEntity* NewOwner):Owner(NewOwner){}

void SenseFacade::GetEntitiesInSight(vector<IEntity*>& OutEnemiesInSight) {
	World* MyWorld = World::GetCurrentWorld();
	EntityList& Entities = MyWorld->GetAllEntities();
	for (IEntity* Entity : Entities) {
		bool bCanSeeTarget = Owner->LookAtTarget(Entity);
		if (bCanSeeTarget) {
			OutEnemiesInSight.push_back(Entity);
		}
	}
}

int SenseFacade::EmitSound(int Radius) {
	World* MyWorld = World::GetCurrentWorld();
	EntityList& Entities = MyWorld->GetAllEntities();
	int HeardCount = 0;
	for (IEntity* Entity : Entities) {
		bool bHasHeard = Entity->HasHeardSound(Radius);
		if(bHasHeard){
			HeardCount++;
		}
	}
	return HeardCount;
}