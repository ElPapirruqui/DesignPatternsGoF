#pragma once

class IHear {
public:
	bool HasHeardSound(int Radius);
protected:
	IHear();
	int HearingDistance;
};