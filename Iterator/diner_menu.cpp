#include "diner_menu.h"

DinerMenu::DinerMenu(): numberOfItems(0), menuItems(0) {
	this->menuItems = new MenuItem*[MAX_ITEMS];

	this->addItem("Vegetarian BLT",
		"(Fakin') Bacon with lettuce & tomato on whole wheat",
		true,
		2.99f
		);
	
	this->addItem("BLT",
		"Bacon with lettuce & tomato on whole wheat",
		false,
		2.99f
		);
	
	this->addItem("Soup of the day",
		"Soup of the day, with a side of potato salad",
		false,
		3.29
		);

	this->addItem("Hotdog",
		"A hot dog, with saurkraut, relish, onions, topped with cheese",
		false,
		3.05
		);
}
DinerMenu::DinerMenu(const DinerMenu& dinerMenu):numberOfItems(0), menuItems(0) {
	this->operator=(dinerMenu);
}

DinerMenu& DinerMenu::operator=(const DinerMenu& dm) {
	this->numberOfItems = 0;
	std::string name;
	std::string description;
	bool vegetarian;
	double price;
	for (size_t i = 0; i < numberOfItems; i++) {
		name = dm.menuItems[i]->getName();
		description = dm.menuItems[i]->getDescription();
		vegetarian = dm.menuItems[i]->isVegetarian();
		price = dm.menuItems[i]->getPrice();
		this->addItem(name, description, vegetarian, price);
	}
	return *this;
}

void DinerMenu::addItem(std::string name, std::string description, bool vegetarian, double price) {
	if (numberOfItems >= MAX_ITEMS) {
		std::cout << "Sorry, menu is full! Can't add item to menu." << std::endl;
	}
	else {
		menuItems[numberOfItems++] = new MenuItem(name, description, vegetarian, price);
	}
}

MenuItem** DinerMenu::getMenuItems() {
	return this->menuItems;
}

size_t DinerMenu::getNumberOfItems() {
	return this->numberOfItems;
}

Iterator* DinerMenu::createIterator() {
	return new DinerMenuIterator(menuItems, numberOfItems);
}

DinerMenu::~DinerMenu() {
//	std::cout << "DinerMenu::~DinerMenu()" << std::endl;
	for (size_t i = 0; i < this->numberOfItems; i++) {
//		std::cout << i << std::endl;
		delete menuItems[i];
	}
	delete[] menuItems;
}