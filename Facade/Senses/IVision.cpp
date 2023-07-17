#include "IVision.h"
#include "../Helpers/Random.h"
#include "../World/World.h"
#include<iostream>
#include<string>

IVision::IVision() {
	Visibility = Random::Get()->RandomInt(0, 100);	
}

bool IVision::LookAtTarget(IVision* Target) {
	cout << "Visibility: " + std::to_string(Target->Visibility) << endl;
	bool obstacle = Target->CheckIsBlockedByObstacle();
	bool visible = Target->CheckIsVisible();
	bool bIsInSight = !obstacle && visible;
	if (bIsInSight) {
		cout << "IS IN SIGHT!" << endl;
	}
	else {
		cout << "IS HIDDEN..." << endl;
	}
	return bIsInSight;
}

bool IVision::CheckIsBlockedByObstacle() { 
	bool result = Random::Get()->RandomBool();
	cout << "Is Blocked: " + std::to_string(result) << endl;
	return result;
}

bool IVision::CheckIsVisible() { 
	bool result = Visibility > World::GetCurrentWorld()->HiddingThreshold;
	cout << "Is Visible: " + std::to_string(result) << endl;
	return result;
}

void IVision::SetVisibility(int NewVisibility) {
	Visibility = NewVisibility; 
}

int IVision::GetVisibility() { 
	return Visibility; 
}