#pragma once
#include "../RegistryEnums/EEnemy.h"
#include "IClonable.h"
#include "IEntity.h"
#include<map>

using namespace std;

//Defining type for the object map type
typedef map<EEnemyType, Entity*> ProtoypeMap;

class PrototypeRegistry {
public:
	PrototypeRegistry() = default;
	void Add(EEnemyType Type, Entity* NewEntity);
	Entity* Create(EEnemyType Type);
private:
	ProtoypeMap Prototypes;
};