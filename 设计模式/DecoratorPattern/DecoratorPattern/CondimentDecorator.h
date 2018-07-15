#pragma once
#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "Beverage.h"
//调料的抽象基类
class CondimentDecorator :
	public Beverage {
public:
	CondimentDecorator();
	virtual ~CondimentDecorator();
	//使所有的调料装饰着都必须重新实现getDescription()方法
	virtual std::string getDescription() const = 0;
};


#endif // !CONDIMENTDECORATOR_H


