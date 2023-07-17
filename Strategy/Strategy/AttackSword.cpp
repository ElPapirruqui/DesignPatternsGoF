#include "../Entity/Entity.h"
#include "AttackSword.h"
#include "../Entity/Enemy/Enemy.h"
#include "../Components/Health/HealthComponent.h"

AttackSword::AttackSword(IEntity* NewTarget) :IAttack(NewTarget) {}

void AttackSword::Attack() {
	Enemy* TargetEnemy = dynamic_cast<Enemy*>(Target);
	TargetEnemy->EHealthComp->Damage(10);
}