#pragma once
#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherDate.h"
//多重继承，参照CurrentConditionDisplay
//统计当前的平均/最大/最小温度值
class StatisticsDisplay :
	public Observer,
	public DisplayElement {
public:
	StatisticsDisplay();
	//自定义的构造函数
	StatisticsDisplay(WeatherDate* wd) : weatherData(wd) {
		StatisticsDisplay &rthis = *this;
		weatherData->registerObserver(rthis);//注册为观察者
	}
	~StatisticsDisplay();
	void update(float temp, float humidity, float pressure) override;//从Observer接口类中继承过来
	void display() override;//从DisplayElement接口类中继承过来
private:
	float maxTemp = 0.0f;//最大温度
	float minTemp = 200;//最小温度
	float tempSum = 0.0f;//温度总和
	int numReadings;//更新次数
	//这里是否可以用Subject指针？
	WeatherDate* weatherData;//不好意思，这里打错了，应该为WeatherData，懒得改了
};

#endif // !STATISTICSDISPLAY_H


