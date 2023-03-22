#pragma once
#include<string>

using namespace std;

class IEnemy {
public:
	IEnemy();
	virtual ~IEnemy();
	virtual string Welcome() = 0;
};