#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "beverage.h"

class Espresso : public Beverage {
public :
	Espresso() {
		description = "Espresso";
	}

	double cost() {
		return 1.99f;
	}
};

#endif