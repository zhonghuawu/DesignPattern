#ifndef DECORATOR_H
#define DECORATOR_H
#include "beverage.h"
#include "condiment.h"

class Mocha : public CondimentDecorator {
	Beverage* beverage;
public :
	Mocha(Beverage* b) : beverage(b) {}

	string getDescription() {
		return beverage->getDescription() + ", Mocha";
	}

	double cost() {
		return 0.20f + beverage->cost();
	}
};

class Whip : public CondimentDecorator {
	Beverage* beverage;
public :
	Whip(Beverage* b) :beverage(b) {}

	string getDescription() {
		return beverage->getDescription() + ", Whip";
	}

	double cost() {
		return 0.3f + beverage->cost();
	}
};

#endif