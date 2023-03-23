#pragma once
#include "IFactory.h"

class IEnemy;

class EnemyFactory : public IFactory<IEnemy> {
public:
	EnemyFactory(class IConfiguration* NewConfig);
	class IEnemy* Create(string ObjectType) override;
};