#ifndef DINER_MENU_H
#define DINER_MENU_H
#include "menu_item.h"
#include "menu.h"
#include "diner_menu_iterator.h"
#include <iostream>

class DinerMenu : public Menu {
private :
	static const int MAX_ITEMS = 6;
	size_t numberOfItems;
	MenuItem** menuItems;
public :
	DinerMenu();
	DinerMenu(const DinerMenu& dinerMenu);
	DinerMenu& operator=(const DinerMenu& dinerMenu);
	void addItem(std::string name, std::string description, bool vegetarian, double price);
	MenuItem** getMenuItems();
	Iterator* createIterator();
	size_t getNumberOfItems();
	~DinerMenu();
};

#endif