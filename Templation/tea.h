#ifndef TEA_H
#define TEA_H
#include "caffeine_beverage.h"

class Tea : public CaffeineBeverage {
public :
	void brew();
	void addCondiments();
};
#endif