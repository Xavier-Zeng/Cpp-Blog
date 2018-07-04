#pragma once
#ifndef  CURRENTDISPLAY_H
#define CURRENTDISPLAY_H
#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
//具体的实现类CurrentConditionDisplay使用了多重继承
//继承了Observer和DisplayElement
//注意，当使用多重继承时，被继承的基类不应在基类中放置数据成员
class CurrentConditionDisplay :
	public Observer,
	public DisplayElement{
public:
	CurrentConditionDisplay();
	//自定义的构造函数
	////****************数据成员为智能指针时用此函数**************//
	//CurrentConditionDisplay(std::shared_ptr<Subject> &wd){
	//	this->weatherData = wd;//这里的this->可以省略
	//	//由于Subject接口类的registerObserver函数类型为void registerObserver(Observer &rhs)
	//	//因此具体的实现类对象weatherDate调用时传入this指针是不行的，需要用引用指向对象值*this
	//	//引用必须初始化，指向具体的对象，而不像指针初始化指向对象的地址
	//	CurrentConditionDisplay& rthis = *this;
	//	//注册为观察者。这里出现了动态绑定，静态类型为Observer &rhs，动态类型为CurrentConditionDisplay& rthis
	//	weatherData->registerObserver(rthis);
	//}
	//****************数据成员为普通指针时用此函数**************//
	CurrentConditionDisplay(Subject* wd) {
		this->weatherData = wd;//这里的this->可以省略
							   //由于Subject接口类的registerObserver函数类型为void registerObserver(Observer &rhs)
							   //因此具体的实现类对象weatherDate调用时传入this指针是不行的，需要用引用指向对象值*this
							   //引用必须初始化，指向具体的对象，而不像指针初始化指向对象的地址
		CurrentConditionDisplay& rthis = *this;
		//注册为观察者。这里出现了动态绑定，静态类型为Observer &rhs，动态类型为CurrentConditionDisplay& rthis
		weatherData->registerObserver(rthis);
	}

	~CurrentConditionDisplay();

	void update(float temp, float humidity, float pressure) override;//从Observer接口类中继承过来
	void display() override;//从DisplayElement接口类中继承过来
private:
	float temperature;
	float humidity;
	float pressure;
	Subject* weatherData;//这个数据成员为指向Subject的指针，是否能用智能指针替代？
	//std::shared_ptr<Subject> weatherData;//智能指针替代方案
};


#endif // ! CURRENTDISPLAY_H


