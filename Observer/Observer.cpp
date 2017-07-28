// Observer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "weather_data.h"
#include "display.h"

int main() {
	WeatherData weatherData;
	CurrentConditionsDisplay currentDisplay(&weatherData);
	weatherData.setMeasurements(80, 65, 40.4f);

	return 0;
}
