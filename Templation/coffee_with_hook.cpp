#include "coffee_with_hook.h"

void CoffeeWithHook::brew() {
	std::cout << "Dripping Coffee through filter" << std::endl;
}

void CoffeeWithHook::addCondiments() {
	std::cout << "Adding Sugar and Milk" << std::endl;
}

bool CoffeeWithHook::customerWantsCondiments() {
	std::string s = getUserInput();
	if (!s.empty() && (s[0] == 'y' || s[0] == 'Y'))
		return true;
	else
		return false;
}

std::string CoffeeWithHook::getUserInput() {
	std::string sRtn;
	std::cout << "Would you like mild and sugar with your coffee (y/n): ";
	std::cin >> sRtn;
	return sRtn;
}