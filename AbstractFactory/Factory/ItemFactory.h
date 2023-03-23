#pragma once
#include "../Item/IItem.h"
#include "IFactory.h"

class ItemFactory : public IFactory<IItem> {
public:
	ItemFactory(class IConfiguration* NewConfig);
	IItem* Create(string ObjectType) override;
};