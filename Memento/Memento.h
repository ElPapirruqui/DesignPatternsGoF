#pragma once
#include "Struct/Properties.h"

class Memento {
public:
	Memento(Properties NewProperties);
	Properties GetSaved();
private:
	Properties CurrentProperties;
};