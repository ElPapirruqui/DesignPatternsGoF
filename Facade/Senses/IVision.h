#pragma once

class IVision{
public:
	bool LookAtTarget(IVision* Target);
	bool CheckIsBlockedByObstacle();
	bool CheckIsVisible();
	void SetVisibility(int NewVisibility);
	int GetVisibility();
protected:	
	IVision();
	int Visibility;
};