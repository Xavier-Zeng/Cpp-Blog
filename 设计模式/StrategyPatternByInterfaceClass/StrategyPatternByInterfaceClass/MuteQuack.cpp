#include "MuteQuack.h"
#include<iostream>


MuteQuack::MuteQuack() {
}


MuteQuack::~MuteQuack() {
}

void MuteQuack::quack() const {
	std::cout << "<< Silence >>" << std::endl;
}
