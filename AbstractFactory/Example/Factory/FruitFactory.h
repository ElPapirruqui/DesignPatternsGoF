#pragma once
#include "../Fruit/IFruit.h"
#include "../../Factory/IFactory.h"

class FruitFactory : public IFactory<IFruit> {
public:
	FruitFactory(class IConfiguration* NewConfig);
	IFruit* Create(string ObjectType) override;
};