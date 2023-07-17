#include "Component.h"
#include "Composite.h"

Composite::~Composite() {
	DeleteChildren();
}

void Composite::AddComponent(Component* NewComponent) {
	NewComponent->Owner = this;
	Children.push_back(NewComponent);
}

void Composite::RemoveComponent(Component* ComponentToRemove) {
	Children.erase(std::remove(Children.begin(), Children.end(), ComponentToRemove), Children.end());
	Composite* Comp = dynamic_cast<Composite*>(ComponentToRemove);
	if (Comp == nullptr) {
		delete ComponentToRemove;
	} else {
		delete Comp;
	}
}

void Composite::DeleteChildren() {
	for (Component* Child : Children) {
		Composite* ChildComposite = dynamic_cast<Composite*>(Child);
		if (ChildComposite == nullptr) {
			delete Child;
		} else {
			delete ChildComposite;
		}
	}
}

vector<Component*>& Composite::GetChildren() {
	return Children;
}