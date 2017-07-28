#ifndef MALLARD_DUCK_H
#define MALLARD_DUCK_H
#include "quackable.h"
#include <iostream>
class MallardDuck : public Quackable {
public :
	virtual void quack() {
		std::cout << "Quack" << std::endl;
	}
};
#endif