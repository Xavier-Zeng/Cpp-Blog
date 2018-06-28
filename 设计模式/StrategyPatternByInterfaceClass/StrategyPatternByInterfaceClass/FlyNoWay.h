#pragma once
#ifndef FLYNOWAY_H
#define FLYNOWAY_H
#include "FlyBehavior.h"
//该类是从从接口类FlyBehavior继承而来的，用于实现不具有飞行行为的类
class FlyNoWay :
	public FlyBehavior {
public:
	FlyNoWay();
	~FlyNoWay();
	void fly() const override;//override说明覆盖接口类的virtual void fly();
};

#endif // !FLYNOWAY_H
