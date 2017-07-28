#include "pancake_house_menu.h"

PancakeHouseMenu::PancakeHouseMenu() {
	this->menuItems.clear();

	this->addItem("K&B Pancake Breakfast",
		"Pancakes with scrambled eggs, and toast",
		true,
		2.99f
		);
	
	this->addItem("Regular Pancake breakfast",
		"Pancake with fried eggs, sausage",
		false,
		2.99f
		);

	this->addItem("Blueberry Pancakes",
		"Pancake made with fresh blueberries",
		true,
		3.49f
		);
	
	this->addItem("Waffles",
		"Waffles, with your choice of blueberries or strawberries",
		true,
		3.59f
		);
}

PancakeHouseMenu::PancakeHouseMenu(const PancakeHouseMenu& phm) {
	this->operator=(phm);
}

PancakeHouseMenu& PancakeHouseMenu::operator=(const PancakeHouseMenu& phm) {
	this->menuItems.clear();

	std::string name;
	std::string description;
	bool vegetarian;
	double price;

	for (size_t i = 0; i < phm.menuItems.size(); i++) {
		name = phm.menuItems[i]->getName();
		description = phm.menuItems[i]->getDescription();
		vegetarian = phm.menuItems[i]->isVegetarian();
		price = phm.menuItems[i]->getPrice();
		this->addItem(name, description, vegetarian, price);
	}
	return *this;
}

void PancakeHouseMenu::addItem(std::string name, std::string description, bool vegetarian, double price) {
	MenuItem* menuItem = new MenuItem(name, description, vegetarian, price);
	this->menuItems.push_back(menuItem);
}

std::vector<MenuItem*> PancakeHouseMenu::getMenuItems() {
	return this->menuItems;
}

Iterator* PancakeHouseMenu::createIterator() {
	return new PancakeHouseMenuIterator(menuItems);
}

PancakeHouseMenu::~PancakeHouseMenu() {
//	std::cout << "PancakeHouseMenu:~PancakeHouseMenu()" << std::endl;
	for (size_t i = 0; i < this->menuItems.size(); i++) {
//		std::cout << i << std::endl;
		MenuItem* tmpMenuItem = menuItems[i];
		delete tmpMenuItem;
		menuItems[i] = 0;
	}
	this->menuItems.clear();
}