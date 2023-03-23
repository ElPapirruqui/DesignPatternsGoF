#include "../Configuration/IConfiguration.h"
#include "ItemFactory.h"

ItemFactory::ItemFactory(IConfiguration* NewConfig) :IFactory<IItem>(NewConfig) {}

IItem* ItemFactory::Create(string ObjectType) {
	IItem* NewItem = IFactory::Create(ObjectType);
	return NewItem;
}