#pragma once
#include<string>

using namespace std;

class ClassNameFormatter {
public:
	template <typename T>
	static string Format() {
		string ClassName = typeid(T).name();
		string substring = "class ";
		size_t ind = ClassName.find(substring);
		ClassName.erase(ind, substring.length());
		return ClassName;
	}
};