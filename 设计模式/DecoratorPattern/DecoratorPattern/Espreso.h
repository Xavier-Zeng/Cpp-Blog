#pragma once
#ifndef ESPRESO_H
#define ESPRESO_H

#include "Beverage.h"
//实现一个具体的Beverage抽象类
class Espreso :
	public Beverage {
public:
	Espreso();
	~Espreso();
	double cost() const override;//override明确声明要覆盖基类的virtual函数
	std::string getDescription() const override;
};

#endif // !ESPRESO_H


