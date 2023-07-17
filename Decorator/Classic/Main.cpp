#include<iostream>
#include "IEnemy.h"
#include "EnemyDecorator.h"
#include "FlamerEnemy.h"
#include "FlyingEnemy.h"

using namespace std;

int classic_main() {

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