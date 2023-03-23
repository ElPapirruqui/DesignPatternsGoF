#pragma once
#include "../Configuration/IConfiguration.h"
#include<string>

using namespace std;

template<class T>
class IFactory {
public:
	IFactory(class IConfiguration* NewConfig):Configuration(NewConfig) {}
	virtual T* Create(string ObjectType) {
		ObjectMap& ConfigMap = Configuration->GetMap();
		IObject* NewObject = ConfigMap[ObjectType]();
		return static_cast<T*>(NewObject);
	}
protected:
	IConfiguration* Configuration;
};