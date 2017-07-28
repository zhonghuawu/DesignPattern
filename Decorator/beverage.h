#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
using std::string;

class Beverage {
public :
	virtual string getDescription() {
		return description;
	}

	virtual double cost() = 0;
protected :
	string description;
};

#endif