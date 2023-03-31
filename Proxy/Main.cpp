#include<iostream>
#include "Entity/Player.h"
#include "Entity/Enemy.h"
#include "Proxy/PlayerProxy.h"
#include "Proxy/EnemyProxy.h"

using namespace std;

int main() {

	PlayerProxy* MPProxy = new PlayerProxy();
	EnemyProxy* MEProxy = new EnemyProxy();

	MPProxy->Attack(MEProxy);

	MEProxy->Attack(MPProxy);

	return 0;
}