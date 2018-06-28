#pragma once
#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H
#include "FlyBehavior.h"
//该类是从从接口类FlyBehavior继承而来的，用于实现具有飞行行为的类
//class FlyBehavior;//由于要public继承FlyBehavior的接口，所以要用头文件，而不是前置声明
class FlyWithWings :
	public FlyBehavior {
public:
	FlyWithWings();
	~FlyWithWings();
	void fly() const override;//override说明覆盖接口类的virtual void fly();
};


#endif // !


