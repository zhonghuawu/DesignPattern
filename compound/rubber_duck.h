#ifndef RUBBER_DUCK_H
#define RUBBER_DUCK_H
#include "quackable.h"
#include <iostream>
class RubberDuck : public Quackable {
public :
	virtual void quack() {
		std::cout << "Squeak" << std::endl;
	}
};
#endif