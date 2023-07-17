#pragma once
#include "../../Composite/Component.h"
#include<iostream>
#include<string>

using namespace std;

class Property : public Component {
public:
	int Quantity = 0;
	int Chances = 0;
	int Duration = 0;
	Property() = default;
	Property(int NewQuantity, int NewChances, int NewDuration):Quantity(NewQuantity),Chances(NewChances),Duration(NewDuration){}
	virtual void Calculate() = 0;
};