#pragma once
#ifndef FORCASTDISPLAY_H
#define FORCASTDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherDate.h"
//多重继承，参照CurrentConditionDisplay
//通过气压预测未来的天气
class ForecastDisplay :
	public Observer,
	public DisplayElement {
public:
	ForecastDisplay();
	//自定义的构造函数
	ForecastDisplay(WeatherDate* wd){
		this->weatherData = wd;
		ForecastDisplay &rthis = *this;
		weatherData->registerObserver(rthis);//注册为观察者
	}

	~ForecastDisplay();
	void update(float temp, float humidity, float pressure) override;//从Observer接口类中继承过来
	void display() override;//从DisplayElement接口类中继承过来
private:
	float currentPressure = 29.92f;
	float lastPressure;
	WeatherDate* weatherData;
};



#endif // !FORCASTDISPLAY_H
