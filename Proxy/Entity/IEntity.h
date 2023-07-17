#pragma once
#include<vector>

using namespace std;
class IComponent;

class IEntity{
public:
	virtual void Attack(IEntity* Target) = 0;
	virtual void Damage(int Ammount) = 0;
	IComponent* AddComponent(IComponent* NewComponent);
	template <class T>
	T* GetComponent(){
		T* ResultComponent = nullptr;
		for (IComponent* Comp : Components) {
			if (ResultComponent = dynamic_cast<T*>(Comp)) {
				break;
			}
		}
		return ResultComponent;
	}
protected:
	vector<IComponent*> Components;
};