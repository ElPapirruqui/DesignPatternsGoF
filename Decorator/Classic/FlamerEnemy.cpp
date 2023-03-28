#include "FlamerEnemy.h"
#include<iostream>
#include "IEnemy.h"

using namespace std;

FlamerEnemy::FlamerEnemy(IEnemy* NewEnemy) :EnemyDecorator(NewEnemy) {}

void FlamerEnemy::Attack() {
	DecoratedEnemy->Attack();
	BreathFire();
}

void FlamerEnemy::BreathFire() {
	cout << " ...With a big breath of FIRE!" << endl;
}