#ifndef REDHEAD_DUCK_H
#define REDHEAD_DUCK_H
#include "quackable.h"
#include <iostream>
class RedheadDuck : public Quackable {
public :
	virtual void quack() {
		std::cout << "Quack" << std::endl;
	}
};
#endif