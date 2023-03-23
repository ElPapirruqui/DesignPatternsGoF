#pragma once
#include "IFactory.h"

template<class T>
class EnemyFactory : public IFactory<T> {
public:
	EnemyFactory(class IConfiguration* NewConfig);
	T* Create(string ObjectType) override;
};