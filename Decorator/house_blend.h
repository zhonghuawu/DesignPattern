#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H
#include "beverage.h"

class HouseBlend : public Beverage {
public :
	HouseBlend() {
		description = "House Blend Coffee";
	}

	double cost() {
		return 0.89f;
	}
};

#endif