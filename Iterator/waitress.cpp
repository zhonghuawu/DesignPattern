#include "waitress.h"

Waitress::Waitress() {
	menus.clear();
}

void Waitress::addMenu(Menu* menu) {
	this->menus.push_back(menu);
}

void Waitress::printMenu() {
	for (size_t i = 0; i < menus.size(); i++) {
		this->printMenu(menus[i]->createIterator());
		std::cout << std::endl;
	}
	/*
	Iterator* pancakeIterator = pancakeHouseMenu->creatreIterator();
	Iterator* dinerIterator = dinerMenu->createIterator();
	std::cout << "MENU ------ BREAKFAST" << std::endl;
	printMenu(pancakeIterator);
	std::cout << "MENU ------ LUNCH" << std::endl;
	printMenu(dinerIterator);
	*/
}

void Waitress::printMenu(Iterator* iterator) {
	while (iterator->hasNext()) {
		MenuItem* menuItem = (MenuItem*)iterator->next();
		std::cout << menuItem->getName() << ", "
			<< menuItem->getPrice() << " -- "
			<< menuItem->getDescription() << std::endl;
	}
}