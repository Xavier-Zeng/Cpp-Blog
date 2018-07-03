#pragma once
#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <iostream>
#include <vector>
#include "Subject.h"
class WeatherDate :
	public Subject {
public:
	WeatherDate();
	~WeatherDate();
	void registerObserver(std::shared_ptr<Observer> pObserver) const override;//override明确声明要覆盖基类的virtual函数
	void removeObserver(std::shared_ptr<Observer> pObserver) const override;//override明确声明要覆盖基类的virtual函数
	virtual void notifyObserver(std::shared_ptr<Observer> pObserver) const override;//override明确声明要覆盖基类的virtual函数
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
private:
	float temperature;
	float humidity;
	float pressure;
	std::vector<std::shared_ptr<Observer> > vpOberbers;//智能指针数组（数组中的每一个成员都是一个指向Observer对象的智能指针）
};



#endif // !WEATHERDATA_H

