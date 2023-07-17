#pragma once

class IEntity;

class IComponent{
public:
	virtual ~IComponent() { delete this; }
	IEntity* Owner;
};