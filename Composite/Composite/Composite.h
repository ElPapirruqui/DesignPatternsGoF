#pragma once
#include<vector>

using namespace std;
class Component;

class Composite {
public:
	virtual ~Composite();
	void AddComponent(Component* NewComponent);
	void RemoveComponent(Component* ComponentToRemove);
	vector<Component*>& GetChildren();
private:
	void DeleteChildren();
	vector<Component*> Children;
};