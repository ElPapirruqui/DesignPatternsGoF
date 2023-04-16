#include "Critic.h"
#include "../../Helpers/Random.h"

void Critic::Calculate() {
	int Proc = Random::Get()->RandomInt(0, 100);
	if (Proc <= Chances) {
		cout << "Applies critical by " << Quantity << "x damage" << endl;
	}	
}