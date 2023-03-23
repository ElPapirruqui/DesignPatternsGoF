#include "../Configuration/IConfiguration.h"
#include "EnemyFactory.h"
#include "../Enemy/IEnemy.h"

template<class T>
EnemyFactory<T>::EnemyFactory(IConfiguration* NewConfig):IFactory<T>(NewConfig) {}

template<class T>
T* EnemyFactory<T>::Create(string ObjectType) {
	T* NewEnemy = IFactory::Create<T>(ObjectType);
	return NewEnemy;
}