#include "../Entity/Entity.h"
#include "AttackFireball.h"
#include "../Entity/Enemy/Enemy.h"
#include "../Components/Health/HealthComponent.h"
#include "../World/World.h"
#include<vector>

using namespace std;

AttackFireball::AttackFireball(IEntity* NewTarget) :IAttack(NewTarget) {}

void AttackFireball::Attack() {
	Enemy* TargetEnemy = dynamic_cast<Enemy*>(Target);
	vector<IEntity*> OutEntities;
	World::GetCurrentWorld()->GetEntitiesInRadius(OutEntities, TargetEnemy->GetCurrentPosition(), 50);
	for (IEntity* Ent : OutEntities) {
		Enemy* EnemyInRadius = dynamic_cast<Enemy*>(Ent);
		EnemyInRadius->EHealthComp->Damage(50);
	}
}