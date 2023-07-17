#include "IEnemy.h"

IEnemy::IEnemy(EEnemyType NewType, EWeaponType NewWeapon, int NewSpeed, int NewHealth, int NewDefense)
	:Type(NewType), Weapon(NewWeapon), Speed(NewSpeed), Health(NewHealth), Defense(NewDefense){}

IEnemy* IEnemy::Clone() {
	return new IEnemy(*this);
}