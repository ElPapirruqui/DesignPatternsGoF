#include "../World/World.h"
#include "Entity.h"

IEntity::IEntity() {
	Move(Random::Get()->RandomVector3(Vector3(0,0,0), World::GetCurrentWorld()->GetDimension()));
}

IEntity::~IEntity() { 
	delete this; 
};

	