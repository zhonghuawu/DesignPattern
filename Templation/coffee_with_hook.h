#ifndef COFFEE_WITH_HOOK_H
#define COFFEE_WITH_HOOK_H
#include "caffeine_beverage.h"
class CoffeeWithHook : public CaffeineBeverage {
public :
	void brew();
	void addCondiments();
	bool customerWantsCondiments();
	std::string getUserInput();
};

#endif