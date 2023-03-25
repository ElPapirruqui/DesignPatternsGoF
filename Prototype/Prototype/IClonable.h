#pragma once

template<class T>
class IClonable {
public:
	virtual T* Clone() = 0;
};