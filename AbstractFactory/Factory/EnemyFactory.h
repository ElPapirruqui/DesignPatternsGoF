#pragma once
#include "IFactory.h"
#include<vector>

using namespace std;

class EnemyFactory : public IFactory {
public:
	EnemyFactory(IConfiguration* NewConfig);
	~EnemyFactory();
	IEnemy* CreateEnemy(string ClassName);
private:
	IConfiguration* Configuration;
};