#pragma once

#ifndef OBSERVER_H
#define OBSERVER_H
//则是一个观察者Observer的接口类
class Observer {
public:
	Observer();
	~Observer();
	virtual void update(float temp, float humidity, float pressure) = 0;
};

#endif // !OBSERVER_H


