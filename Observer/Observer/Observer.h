#pragma once

class Subject;

class Observer {
public:
	Observer(Subject* NewSubject):MySubject(NewSubject) {}
	virtual void Update() = 0;
protected:
	Subject* MySubject;
};