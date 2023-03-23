#pragma once
#include "../Enemy/IEnemy.h"
#include "IFactory.h"

class EnemyFactory : public IFactory<IEnemy> {
public:
	EnemyFactory(class IConfiguration* NewConfig);
	IEnemy* Create(string ObjectType) override;
};