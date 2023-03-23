#pragma once
#include "../../Configuration/IConfiguration.h"
#include "../Fruit/Apple.h"
#include "../Fruit/Orange.h"

class FruitConfig : public IConfiguration {
public:
	FruitConfig() {
		Add<Apple>();
		Add<Orange>();
	}
};