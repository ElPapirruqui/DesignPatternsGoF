#include "Fire.h"
#include "../../Helpers/Random.h"

void Fire::Calculate() {
	int Proc = Random::Get()->RandomInt(0, 100);
	if (Proc <= Chances) {
		cout << "Burns the target, dealing " << Quantity << " fire damage each second over " << Duration << "s" << endl;
	}
	else {
		cout << "Burns the target by " << Quantity << " fire damage" << endl;
	}
}