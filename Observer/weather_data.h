#ifndef HEADER_H
#define HEADER_H
#include "observer.h"
#include "subject.h"
#include "display.h"

#include <vector>

using std::vector;

class WeatherData : public Subject {
private :
	vector<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
public :
	WeatherData(): temperature(0.0f), humidity(0.0f), pressure(0.0f) {}

	void registerObserver(Observer* o) {
		observers.push_back(o);
	}

	void removeObserver(Observer* o) {
		vector<Observer*>::const_iterator i = std::find(observers.begin(), observers.end(), o);
		if (i != observers.end()) {
			observers.erase(i);
		}
	}

	void notifyObservers() {
		for (vector<Observer*>::const_iterator i = observers.begin(); i != observers.end(); i++) {
			(*i)->update(temperature, humidity, pressure);
		}
	}

	void measurementsChanged() {
		this->notifyObservers();
	}

	void setMeasurements(float temp, float humi, float pres) {
		this->temperature = temp;
		this->humidity = humi;
		this->pressure = pres;
		measurementsChanged();
	}
};

#endif

