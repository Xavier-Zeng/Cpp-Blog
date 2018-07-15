#pragma once
#ifndef WHIP_H
#define WHIP_H
#include<memory>
#include "CondimentDecorator.h"
class Beverage;
class Whip :
	public CondimentDecorator {
public:
	Whip();
	Whip(std::shared_ptr<Beverage> pB) : pBeverage(pB) {}
	~Whip();
	double cost() const override;
	std::string getDescription() const override;
private:
	std::shared_ptr<Beverage> pBeverage;
};
#endif // !WHIP_H



