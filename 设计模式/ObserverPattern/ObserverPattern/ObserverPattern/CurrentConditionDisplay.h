#pragma once
#ifndef  CURRENTDISPLAY_H
#define CURRENTDISPLAY_H


#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
//具体的实现类CurrentConditionDisplay使用了多重继承恶搞
//继承了Observer和DisplayElement
//注意，当使用多重继承时，被继承的基类不应再基类中放置数据成员
class CurrentConditionDisplay :
	public Observer,
	public DisplayElement {
public:
	CurrentConditionDisplay();
	//自定义的构造函数
	CurrentConditionDisplay(Subject* wd) : weatherDate(wd) {
		weatherDate->registerObserver();//注册为观察者
	}
	~CurrentConditionDisplay();

	void update(float temp, float humidity, float pressure) override;
	void display() override;
private:
	float temperature;
	float humidity;
	float pressure;
	Subject* weatherDate;
};


#endif // ! CURRENTDISPLAY_H


