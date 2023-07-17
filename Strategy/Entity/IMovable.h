#pragma once
#include "../Struct/Vector3.h";

class IMovable {
public:
	virtual bool Move(Vector3 NewPosition) { 
		CurrentPosition = NewPosition;  
		return true; 
	}
	Vector3 GetCurrentPosition() { return CurrentPosition; }
private:
	Vector3 CurrentPosition;
};