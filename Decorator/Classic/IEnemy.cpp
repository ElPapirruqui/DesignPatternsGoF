#include "IEnemy.h"
#include<iostream>

using namespace std;

void IEnemy::Attack() {
	cout << "Enemy Attacks the target" << endl;
}

void IEnemy::Move() {
	cout << "Moves to the new location" << endl;
}