#pragma once

#ifndef OBSERVER_H
#define OBSERVER_H
//则是一个观察者Observer的抽象接口类
class Observer {
public:
	Observer();
	virtual ~Observer();
	virtual void update(float temp, float humidity, float pressure) = 0;
	//virtual void display() = 0;
};

#endif // !OBSERVER_H


