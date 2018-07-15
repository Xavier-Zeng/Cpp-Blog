#pragma once
#ifndef BEVERAGE_H
#define BEVERAGE_H

#include<string>
//建立一个饮料的抽象基类
class Beverage {
public:
	Beverage();
	virtual ~Beverage();//为抽象基类的析构函数声明为virtual
	virtual double cost() const = 0;
	virtual std::string getDescription() const = 0;//这里声明为虚函数，让每个子类重写该函数
protected:
	std::string description;
};
#endif // !BEVERAGE_H


