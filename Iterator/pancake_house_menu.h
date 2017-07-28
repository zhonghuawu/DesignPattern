#ifndef PANCAKE_HOUSE_MENU_H
#define PANCAKE_HOUSE_MENU_H
#include "menu_item.h"
#include "menu.h"
#include "pancake_house_menu_iterator.h"
#include <iostream>
#include <vector>
using std::vector;

class PancakeHouseMenu : public Menu{
private :
	vector<MenuItem*> menuItems;
public:
	PancakeHouseMenu();
	PancakeHouseMenu(const PancakeHouseMenu& );
	PancakeHouseMenu& operator=(const PancakeHouseMenu& );
	void addItem(std::string name, std::string description, bool vegetarian, double price);
	std::vector<MenuItem*> getMenuItems();
	Iterator* createIterator();
//	Iterator* creatreIterator() const;
	~PancakeHouseMenu();
};
#endif