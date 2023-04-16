#include "Stun.h"
#include "../../Helpers/Random.h"

void Stun::Calculate() {
	int Proc = Random::Get()->RandomInt(0, 100);
	if (Proc <= Chances) {
		cout << "Stuns it by " << Duration << "s" << endl;
	}
}