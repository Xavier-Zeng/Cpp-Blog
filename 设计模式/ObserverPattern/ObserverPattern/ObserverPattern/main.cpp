#include "Observer.h"
#include "CurrentConditionDisplay.h"
#include "Subject.h"
#include "DisplayElement.h"
#include "WeatherDate.h"
#include <iostream>
int main() {
	/*float temperature =1.0;
	float humidity = 2.0;
	float pressure = 3.0;
	std::vector<Observer*> vOberbers;*/
	//WeatherDate weatherData(temperature, humidity, pressure, vOberbers);
	WeatherDate weatherData;
	CurrentConditionDisplay currentDisplay(&weatherData);
	weatherData.setMeasurements(80, 65, 30.4f);
}