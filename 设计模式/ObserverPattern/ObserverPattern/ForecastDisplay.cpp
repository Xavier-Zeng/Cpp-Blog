#include "ForecastDisplay.h"
#include <iostream>


ForecastDisplay::ForecastDisplay() {
}


ForecastDisplay::~ForecastDisplay() {
}

void ForecastDisplay::update(float temp, float humidity, float pressure) {
	lastPressure = currentPressure;
	currentPressure = pressure;

	display();
}

void ForecastDisplay::display() {
	if (currentPressure > lastPressure) {
		std::cout << "Improving weather on the way!" << std:: endl;
	}
	else if (currentPressure == lastPressure) {
		std::cout << "More of the same" << std::endl;
	}
	else if (currentPressure < lastPressure) {
		std::cout << "Watch out for cooler, rainy weather" << std::endl;
	}
}
