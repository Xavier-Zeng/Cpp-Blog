#pragma once
#ifndef MOCHA_H
#define MOCHA_H

#include<memory>

#include "CondimentDecorator.h"
//实现调料装饰者抽象类CondimentDecorator
class Mocha :
	public CondimentDecorator {
public:
	Mocha();
	//自定义的构造函数
	Mocha(std::shared_ptr<Beverage> pB) : pBeverage(pB) {}
	~Mocha();
	double cost() const override;
	std::string getDescription() const override;
private:
	std::shared_ptr<Beverage> pBeverage;//使用智能指针，指向抽象基类Beverage
};
#endif // !MOCHA_H



