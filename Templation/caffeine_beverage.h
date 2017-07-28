#ifndef CAFFEINE_BEVERAGE_H
#define CAFFEINE_BEVERAGE_H
#include <iostream>
#include <string>

class CaffeineBeverage {
public :
	virtual void prepareRecipe() final;
	virtual void brew() = 0;
	virtual void addCondiments() = 0;;
	void boilWater();
	void pourInCup();
	virtual bool customerWantsCondiments();
	virtual std::string getUserInput();
};

#endif