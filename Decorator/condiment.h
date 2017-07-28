#ifndef CONDIMENT_H
#define CONDIMENT_H
#include "beverage.h"

class CondimentDecorator : public Beverage {
public :
	virtual string getDescription() = 0;
};

#endif