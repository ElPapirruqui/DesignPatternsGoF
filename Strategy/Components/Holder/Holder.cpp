#include "Holder.h"
#include "../IComponent.h"

IComponent* Holder::AddComponent(IComponent* NewComponent) {
	NewComponent->Owner = this;
	Components.push_back(NewComponent);
	return NewComponent;
}