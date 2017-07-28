#ifndef COFFEE_H
#define COFFEE_H
#include "caffeine_beverage.h"

class Coffee : public CaffeineBeverage {
public :
	void brew();
	void addCondiments();
};

#endif