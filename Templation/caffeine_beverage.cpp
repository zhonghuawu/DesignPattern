#include "caffeine_beverage.h"

void CaffeineBeverage::prepareRecipe() {
	this->boilWater();
	this->brew();
	this->pourInCup();
	if (this->customerWantsCondiments()){
		this->addCondiments();
	}
}

void CaffeineBeverage::boilWater() {
	std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverage::pourInCup() {
	std::cout << "Pouring into cup" << std::endl;
}

bool CaffeineBeverage::customerWantsCondiments() {
	return true;
}

std::string CaffeineBeverage::getUserInput() {
	return std::string("y");
}
