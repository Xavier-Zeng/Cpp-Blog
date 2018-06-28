#pragma once
#ifndef MODELDUCK_H
#define MODELDUCK_H
//ModelDuck继承Duck类，是鸭子类的一个具体类
#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
class ModelDuck :
	public Duck {
public:
	ModelDuck() = default;//此构造函数会调用Duck的构造函数
	~ModelDuck();
	void display() const override;//用于显示具体的鸭子类对象

};


#endif // !MODELDUCK_H


