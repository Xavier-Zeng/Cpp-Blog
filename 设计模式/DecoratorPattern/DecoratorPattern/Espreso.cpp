#include "Espreso.h"



Espreso::Espreso() {
	description = "Espreso";
}


Espreso::~Espreso() {
}

double Espreso::cost() const {
	return 1.99;//Ò»±­EspresoÒª1.99Ôª
}

std::string Espreso::getDescription() const {
	return description;
}
