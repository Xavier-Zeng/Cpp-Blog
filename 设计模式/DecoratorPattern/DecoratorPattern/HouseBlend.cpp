#include "HouseBlend.h"



HouseBlend::HouseBlend() {
	description = "House Blend Coffee";
}


HouseBlend::~HouseBlend() {
}

double HouseBlend::cost() const {
	return .89;//Ò»±­HouseBlendÒª0.89Ôª
}

std::string HouseBlend::getDescription() const {
	return description;
}
