#pragma once
#include <map>
#include<string>
#include "../Helpers/GetClassName.h"
#include "../IEnemy.h"

using namespace std;

//Defining type for the enemy creator function reference
typedef IEnemy* (*IEnemyCreator)();
//Defining type for the enemy map type
typedef map<string, IEnemyCreator> EnemyMap;

class IConfiguration {
protected:
	IConfiguration() = default;
	EnemyMap MyMap;
	template <typename T>
	static IEnemy* Instantiate() { return new T{}; }
	template <typename T>
	void Add() {
		string ClassName = GetClassName<T>();
		MyMap[ClassName] = Instantiate<T>;
	}
public:
	EnemyMap& GetMap() { return MyMap; }
};