#pragma once
#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H
#include "Beverage.h"
//实现具体的Beverage抽象类
class HouseBlend :
	public Beverage {
public:
	HouseBlend();
	~HouseBlend();
	double cost() const override;//override明确声明要覆盖基类的virtual函数
	std::string getDescription() const override;
};

#endif // !HOUSEBLEND_H


