#pragma once

class Composite;

class Component {
public:
	virtual ~Component() {}
	bool operator==(Component* Other) {
		return Other == this;
	}
	Composite* Owner;
};