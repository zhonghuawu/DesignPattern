#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
using std::cout;
using std::endl;

class Singleton {
private :
	Singleton() {
		cout << "Singtelon Constructor." << endl;
	}
public :
	static Singleton* getInstance() {
		if (uniqueInstance == 0) {
			uniqueInstance = new Singleton();
		}
		cout << "get an instance of Singleton object." << endl;
		return uniqueInstance;
	}
private :
	static Singleton* uniqueInstance;
};

Singleton* Singleton::uniqueInstance = 0;

#endif