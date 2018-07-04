#include "CurrentConditionDisplay.h"
#include <iostream>


CurrentConditionDisplay::CurrentConditionDisplay() {
}


CurrentConditionDisplay::~CurrentConditionDisplay() {
	//指针指针不需要手动delete
	/*delete weatherData;*/
}

void CurrentConditionDisplay::update(float temp, float humidity, float pressure) {
	this->temperature = temp;
	this->humidity = humidity;
	//this->pressure = pressure;
	display();
}

void CurrentConditionDisplay::display() {
	std::cout << "Current conditions: " <<
		temperature  << "F degrees and "  <<
		humidity  << "% humidity" << std::endl;
}
