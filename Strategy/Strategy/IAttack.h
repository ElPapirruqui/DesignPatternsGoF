#pragma once

class IEntity;

class IAttack {
public:
	IAttack(IEntity* NewTarget) :Target(NewTarget) {}
	virtual void Attack() = 0;
protected:
	IEntity* Target;
};