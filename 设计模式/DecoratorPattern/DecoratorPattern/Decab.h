#pragma once
#ifndef DECAB_H
#define DECAB_H
#include "Beverage.h"

class Decab :
	public Beverage {
public:
	Decab();
	~Decab();
	double cost() const override;
	std::string getDescription() const override;
};

#endif // !DECAB_H


