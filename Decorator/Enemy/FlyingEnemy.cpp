#include "FlyingEnemy.h"
#include<iostream>

using namespace std;

FlyingEnemy::FlyingEnemy(IEnemy* NewEnemy) :EnemyDecorator(NewEnemy) {}

void FlyingEnemy::Move(){
	Fly();
	DecoratedEnemy->Move();
}

void FlyingEnemy::Fly() {
	cout << "The Enemy elevates in the air and... " << endl;
}