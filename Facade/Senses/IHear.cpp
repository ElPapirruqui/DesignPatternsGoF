#include "../Helpers/Random.h"
#include "IHear.h"
#include<iostream>
#include<string>

using namespace std;

IHear::IHear() {
	HearingDistance = Random::Get()->RandomInt(0, 100);
}

bool IHear::HasHeardSound(int Radius) {
	cout << "Enemy hearing distance: " + to_string(HearingDistance) << endl;
	cout << "Radius: " + to_string(Radius) << endl;
	bool bHasBeenHeard = Radius >= HearingDistance;
	if (bHasBeenHeard) {
		cout << "You has been heard!" << endl;
	}
	else {
		cout << "You hasnt been heard..." << endl;
	}
	return bHasBeenHeard;
}