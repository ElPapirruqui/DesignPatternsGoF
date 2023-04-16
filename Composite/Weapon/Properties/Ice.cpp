#include "Ice.h"
#include "../../Helpers/Random.h"

void Ice::Calculate() {
	int Proc = Random::Get()->RandomInt(0, 100);
	if (Proc <= Chances) {
		cout << "Deals " << Quantity << " ice damage and freeze the target by " << Duration << "s" << endl;
	}
	else {
		cout << "Deals " << Quantity << " ice damage" << endl;
	}
}