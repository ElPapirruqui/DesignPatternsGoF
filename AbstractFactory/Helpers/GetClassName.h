#pragma once
#include<string>

using namespace std;

template <typename T>
static string GetClassName() {
	string ClassName = typeid(T).name();
	string Prefix = "class ";
	size_t Index = ClassName.find(Prefix);
	ClassName.erase(Index, Prefix.length());
	return ClassName;
}