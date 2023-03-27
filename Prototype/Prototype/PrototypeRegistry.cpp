#include "PrototypeRegistry.h"

void PrototypeRegistry::Add(EEnemyType Type, Entity* NewEntity) {
	Prototypes[Type] = NewEntity;
	Entity* Get(EEnemyType Type);
}

Entity* PrototypeRegistry::Create(EEnemyType Type) {
	return Prototypes[Type]->Clone();
}