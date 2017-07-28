#ifndef DUCK_CALL_H
#define DUCK_CALL_H
#include "quackable.h"
#include <iostream>
class DuckCall : public Quackable {
public :
	virtual void quack() {
		std::cout << "Kwak" << std::endl;
	}
};
#endif