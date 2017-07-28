#ifndef MENU_ITEM_H
#define MENU_ITEM_H
#include <string>

class MenuItem {
private :
	std::string name;
	std::string description;
	bool vegetarian;
	double price;
public :
	MenuItem(std::string name, std::string description, bool vegetarian, double price);
	std::string getName();
	std::string getDescription();
	bool isVegetarian();
	double getPrice();
	~MenuItem();
};

#endif