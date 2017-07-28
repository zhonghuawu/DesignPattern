#include "menu_item.h"

MenuItem::MenuItem(std::string nm, std::string descript, bool vgt, double pr) {
	this->name = nm;
	this->description = descript;
	this->vegetarian = vgt;
	this->price = pr;
}

std::string MenuItem::getName() {
	return this->name;
}

std::string MenuItem::getDescription() {
	return this->description;
}

bool MenuItem::isVegetarian() {
	return this->vegetarian;
}

double MenuItem::getPrice() {
	return this->price;
}

MenuItem::~MenuItem() {
	this->name.clear();
	this->description.clear();
}