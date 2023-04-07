#pragma once
#include<vector>

using namespace std;
class IComponent;

class Holder {
public:
	virtual ~Holder() { delete this; }
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