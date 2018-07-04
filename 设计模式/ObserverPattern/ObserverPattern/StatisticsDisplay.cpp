#include "StatisticsDisplay.h"
#include <iostream>
StatisticsDisplay::StatisticsDisplay() {
}


StatisticsDisplay::~StatisticsDisplay() {
}

void StatisticsDisplay::update(float temp, float humidity, float pressure) {
	tempSum += temp;
	numReadings++;
	if (temp > maxTemp) {
		maxTemp = temp;
	}
	if (temp < minTemp) {
		minTemp = temp;
	}
	display();
}

void StatisticsDisplay::display() {
	std::cout << "Avg/Max/Min temperature = "
		<< (tempSum / numReadings)
		<< "/"
		<< maxTemp
		<< "/"
		<< minTemp
		<< std::endl;
}
