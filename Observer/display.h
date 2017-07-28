#ifndef DISPLAY_H
#define DISPLAY_H
#include "observer.h"
#include "displayment.h"

#include <iostream>
using std::cout;
using std::endl;

#ifndef CURRENT_CONDITIONS_DISPLAY
#define CURRENT_CONDITIONS_DISPLAY
class CurrentConditionsDisplay : public Observer, DisplayElement {
private :
	float temperature;
	float humidity;
	Subject *weatherData;
public :
	CurrentConditionsDisplay(Subject* wd): weatherData(wd) {
		weatherData->registerObserver(this);
	}

	void update(float temp, float humi, float pres) {
		this->temperature = temp;
		this->humidity = humi;
		display();
	}

	void display() const {
		cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << endl;
	}
};
#endif

#ifndef STATICS_DISPLAY
#define STATICS_DISPLAY
class StaticsDisplay : public Observer, DisplayElement {
private :
	float temperature;
	float humidity;
	float pressure;
	Subject* weatherData;
public:
	StaticsDisplay(Subject *wd) : weatherData(wd) {
		weatherData->registerObserver(this);
	}

	void update(float temp, float humi, float pres) {
		this->temperature = temp;
		this->humidity = humi;
		this->pressure = pres;
		display();
	}

	void display() const {
		cout << "Statics Display" << endl;
	}
};

#endif

#endif