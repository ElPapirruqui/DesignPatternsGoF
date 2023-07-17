#pragma once
#include<math.h>
#include<string>

using namespace std;

struct Vector3 {
	int X = 0;
	int Y = 0;
	int Z = 0;
	Vector3() = default;
	Vector3(int NewX, int NewY, int NewZ) :X(NewX), Y(NewY), Z(NewZ) {}
	static int Distance(Vector3 A, Vector3 B) {
		return int(sqrt(pow((B.X - A.X), 2) + pow((B.Y - A.Y), 2) + pow((B.Z - A.Z), 2)));
	}
	string ToString() { return "X: " + to_string(X) + ", Y: " + to_string(Y) + ", Z: " + to_string(Z); }
};