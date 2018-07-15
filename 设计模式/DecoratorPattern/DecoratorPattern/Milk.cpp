#include "Milk.h"



Milk::Milk() {
}


Milk::~Milk() {
}

double Milk::cost() const {
	return .10 + pBeverage->cost();
}

std::string Milk::getDescription() const {
	return pBeverage->getDescription() + ", Milk";
}
