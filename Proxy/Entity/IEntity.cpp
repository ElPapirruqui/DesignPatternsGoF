#include "IEntity.h"
#include "../Components/IComponent.h"

IComponent* IEntity::AddComponent(IComponent* NewComponent) {
	NewComponent->Owner = this;
	Components.push_back(NewComponent);
	return NewComponent;
}