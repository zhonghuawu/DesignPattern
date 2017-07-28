#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>
using std::cout;
using std::endl;
class Light {
public :
	void on();
	void off();
};
void Light::on() {
	cout << "light on..." << endl;
}

void Light::off() {
	cout << "light off..." << endl;
}
#endif