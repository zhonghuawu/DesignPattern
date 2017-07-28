// Decorator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "decorator.h"
#include "espresso.h"
#include "house_blend.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
	Beverage* beverage = new Espresso();;
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;
	Beverage* beverage2 = new HouseBlend();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;
}
