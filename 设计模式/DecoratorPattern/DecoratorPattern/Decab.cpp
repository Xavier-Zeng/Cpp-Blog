#include "Decab.h"



Decab::Decab() {
	description = "Decab";
}


Decab::~Decab() {
}

double Decab::cost() const {
	return 1.05;
}

std::string Decab::getDescription() const {
	return description;
}
