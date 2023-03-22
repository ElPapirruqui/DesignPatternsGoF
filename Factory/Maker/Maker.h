#pragma once
#include <map>
#include<string>
#include "ClassNameFormatter.h"
#include "../IEnemy.h"

using namespace std;

class Maker {
protected:
	Maker() = default;
	//Defining type for the enemy creator function reference
	typedef IEnemy* (*IEnemyCreator)();
	//Defining type for the enemy map type
	typedef map<string, IEnemyCreator> EnemyMap;
	EnemyMap MyMap;
	template <typename T>
	static IEnemy* Instantiate() { return new T{}; }
	template <typename T>
	void Add() {
		string ClassName = ClassNameFormatter::Format<T>();
		MyMap[ClassName] = Instantiate<T>;
	}
public:
	EnemyMap& GetMap() { return MyMap; }
};