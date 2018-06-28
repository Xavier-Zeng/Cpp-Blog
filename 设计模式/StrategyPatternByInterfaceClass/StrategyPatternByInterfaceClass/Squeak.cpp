#include "Squeak.h"
#include <iostream>


Squeak::Squeak() {
}


Squeak::~Squeak() {
}

void Squeak::quack() const {
	std::cout << "Squeak" << std::endl;
}
