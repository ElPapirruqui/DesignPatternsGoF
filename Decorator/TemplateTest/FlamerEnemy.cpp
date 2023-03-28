#include "FlamerEnemy.h"
#include<iostream>

using namespace std;

FlamerEnemy::FlamerEnemy(IEnemy* NewEnemy):IDecorator(NewEnemy) {}

void FlamerEnemy::Attack() {
	DecoratedEnemy->Attack();
	BreathFire();
}

void FlamerEnemy::BreathFire() {
	cout << " ...With a big breath of FIRE!" << endl;
}