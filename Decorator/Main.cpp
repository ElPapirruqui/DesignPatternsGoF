#include<iostream>
#include "Enemy/IEnemy.h"
#include "Enemy/EnemyDecorator.h"
#include "Enemy/FlamerEnemy.h"
#include "Enemy/FlyingEnemy.h"

using namespace std;

int main() {

	IEnemy* Enemy = new IEnemy();
	cout << "Regular Enemy" << endl;
	cout << "-------------" << endl;
	Enemy->Move();
	Enemy->Attack();
	cout << "" << endl;

	cout << "Flamer Enemy" << endl;
	cout << "-------------" << endl;
	FlamerEnemy* Flamer = new FlamerEnemy(Enemy);
	Flamer->Move();
	Flamer->Attack();
	cout << "" << endl;

	cout << "Flying Enemy" << endl;
	cout << "------------" << endl;
	FlyingEnemy* Flying = new FlyingEnemy(Enemy);
	Flying->Move();
	Flying->Attack();
	cout << "" << endl;

	return 0;
}