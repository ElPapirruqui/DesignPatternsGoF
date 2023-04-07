#pragma once

class Holder;

class IComponent{
public:
	virtual ~IComponent() { delete this; }
	Holder* Owner;
};