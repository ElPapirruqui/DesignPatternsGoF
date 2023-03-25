#include "PrototypeRegistry.h"

void PrototypeRegistry::Add(EEnemyType Type, IClonable<IEntity>* NewEntity) {
	Prototypes[Type] = NewEntity;
	IClonable<IEntity>* Get(EEnemyType Type);
}

IClonable<IEntity>* PrototypeRegistry::Create(EEnemyType Type) {
	return Prototypes[Type]->Clone();
}