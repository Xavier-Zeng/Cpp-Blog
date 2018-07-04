#pragma once
#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <iostream>
#include <vector>
#include "Subject.h"
#include "Observer.h"
class WeatherDate :
	public Subject {
public:
	WeatherDate();
	~WeatherDate();
	//自定义的构造函数
	WeatherDate(float temp, float hmdy, float pse, std::vector<std::shared_ptr<Observer>>  voberbers) :
		temperature(temp), humidity(hmdy), pressure(pse), vpOberbers(voberbers) {}
	//自定义的构造函数
	WeatherDate(std::vector<std::shared_ptr<Observer>>  voberbers) :
		vpOberbers(voberbers) {}
	void registerObserver(Observer &rhs) override;//override明确声明要覆盖基类的virtual函数
	void removeObserver(Observer &rhs) override;//override明确声明要覆盖基类的virtual函数
	void notifyObserver()override;//override明确声明要覆盖基类的virtual函数
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
private:
	float temperature;
	float humidity;
	float pressure;
	//智能指针数组（数组中的每一个成员都是一个指向Observer对象的智能指针）
	std::vector<std::shared_ptr<Observer>> vpOberbers;
};
#endif // !WEATHERDATA_H

