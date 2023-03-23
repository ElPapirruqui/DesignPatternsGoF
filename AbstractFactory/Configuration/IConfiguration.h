#pragma once
#include <map>
#include<string>
#include "../Helpers/GetClassName.h"
#include "IObject.h"

using namespace std;

//Defining type for the object creator function reference
typedef IObject* (*IObjectCreator)();
//Defining type for the object map type
typedef map<string, IObjectCreator> ObjectMap;

class IConfiguration {
protected:
	IConfiguration() = default;
	ObjectMap MyMap;
	template <class T>
	static IObject* Instantiate() { return new T{}; }
	template <class T>
	void Add(){
		string TypeName = T::Type;
		//string TypeName = GetClassName<T>();
		MyMap[TypeName] = Instantiate<T>;
	}
public:
	ObjectMap& GetMap() { return MyMap; }
};