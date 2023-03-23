#include "../../Configuration/IConfiguration.h"
#include "FruitFactory.h"

FruitFactory::FruitFactory(IConfiguration* NewConfig) :IFactory<IFruit>(NewConfig) {}

IFruit* FruitFactory::Create(string ObjectType) {
	return IFactory::Create(ObjectType);
}