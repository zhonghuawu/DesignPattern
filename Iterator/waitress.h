#ifndef WAITRESS_H
#define WAITRESS_H
#include "iterator.h"
#include "menu.h"
#include "pancake_house_menu.h"
#include "diner_menu.h"
#include <iostream>
#include <vector>

class Waitress {
private :
	std::vector<Menu*> menus;
public :
	Waitress();
	void addMenu(Menu* menu);
	void printMenu();
	~Waitress() {}
private :
	void printMenu(Iterator* iterator);
};

#endif