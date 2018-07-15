#pragma once
#ifndef SOY_H
#define SOY_H
#include<memory>

#include "CondimentDecorator.h"
class Soy :
	public CondimentDecorator {
public:
	Soy();
	Soy(std::shared_ptr<Beverage> pB) : pBeverage(pB) {}
	~Soy();
	double cost() const override;
	std::string getDescription() const override;
private:
	std::shared_ptr<Beverage> pBeverage;
};

#endif // !SOY_H


