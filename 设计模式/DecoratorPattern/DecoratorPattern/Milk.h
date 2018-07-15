#pragma once
#ifndef MILK_H
#define MILK_H
#include "CondimentDecorator.h"
#include<memory>
class Milk :
	public CondimentDecorator {
public:
	Milk();
	Milk(std::shared_ptr<Beverage> pB) : pBeverage(pB) {}
	~Milk();
	double cost() const override;
	std::string getDescription() const override;
private:
	std::shared_ptr<Beverage> pBeverage;//使用智能指针，指向抽象基类Beverage
};

#endif // !MILK_H


