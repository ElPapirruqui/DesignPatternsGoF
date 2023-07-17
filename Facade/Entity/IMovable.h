#pragma once

struct Vector3 {
	int X = 0;
	int Y = 0;
	int Z = 0;
	Vector3() = default;
	Vector3(int NewX, int NewY, int NewZ):X(NewX),Y(NewY),Z(NewZ) {}
};

class IMovable {
public:
	virtual bool Move(Vector3 NewPosition) { 
		CurrentPosition = NewPosition; 
		OnFootstep(); 
		return true; 
	}
	Vector3 GetCurrentPosition() { return CurrentPosition; }
protected:
	IMovable() = default;
	virtual void OnFootstep() {};
private:
	Vector3 CurrentPosition;
};