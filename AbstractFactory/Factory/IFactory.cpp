#include "../Configuration/IConfiguration.h"
#include "IFactory.h"

/*template<class T>
IFactory<T>::IFactory(IConfiguration* NewConfig):Configuration(NewConfig) {}*/
/*
template<class T>
T* IFactory<T>::Create(string ObjectType) {
	ObjectMap& ConfigMap = Configuration->GetMap();
	IObject* NewObject = ConfigMap[ObjectType]();
	return static_cast<T*>(NewObject);
}*/