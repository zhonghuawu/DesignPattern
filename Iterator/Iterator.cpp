// Iterator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "pancake_house_menu.h"
#include "diner_menu.h"

#include "waitress.h"

int _tmain(int argc, _TCHAR* argv[])
{
	PancakeHouseMenu* phm = new PancakeHouseMenu();
	std::vector<MenuItem*> breakfastItems = phm->getMenuItems();
	for (size_t i = 0; i < breakfastItems.size(); i++) {
		std::cout << breakfastItems.at(i)->getName() << " "
			<< breakfastItems.at(i)->getPrice() << std::endl
			<< breakfastItems.at(i)->getDescription() << std::endl;
	}
	std::cout << std::endl;

	DinerMenu *dm = new DinerMenu();
	MenuItem** dinerMenu = dm->getMenuItems();
//	std::cout << "sizeof(dinerMenu)/sizeof(MenuItem*) = " << sizeof(dinerMenu) / sizeof(MenuItem*) << std::endl;
	for (size_t i = 0; i < dm->getNumberOfItems(); i++) {
		std::cout << dinerMenu[i]->getName() << " "
			<< dinerMenu[i]->getPrice() << std::endl
			<< dinerMenu[i]->getDescription() << std::endl;
	}

	Waitress waitress;
	waitress.addMenu(phm);
	waitress.addMenu(dm);
	waitress.addMenu(dm);
	waitress.printMenu();

	delete phm;
	delete dm;
	return 0;
}

