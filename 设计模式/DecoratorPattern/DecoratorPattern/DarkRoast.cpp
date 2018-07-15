#include "DarkRoast.h"



DarkRoast::DarkRoast() {
	description = "DarkRoast";
}


DarkRoast::~DarkRoast() {
}

double DarkRoast::cost() const {
	return .99;//一杯深焙要0.99美元
}

std::string DarkRoast::getDescription() const {
	return description;
}
