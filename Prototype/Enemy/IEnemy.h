#pragma once
#include "../Prototype/IEntity.h"
#include "../RegistryEnums/EEnemy.h"
#include "../RegistryEnums/EWeapon.h"

class IEnemy : public IEntity {
public:
	IEnemy(EEnemyType NewType, EWeaponType NewWeapon, int NewSpeed, int NewHealth, int NewDefense);
	IEnemy* Clone() override;
	EEnemyType& GetType() { return Type; };
	EWeaponType& GetWeapon() { return Weapon; };
	int& GetSpeed() { return Speed; };
	int& GetHealth() { return Health; };
	int& GetDefense() { return Defense; };
protected:
	EEnemyType Type;
	EWeaponType Weapon;
	int Speed;
	int Health;
	int Defense;
};