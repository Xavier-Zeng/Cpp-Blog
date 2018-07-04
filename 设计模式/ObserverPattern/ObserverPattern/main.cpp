#include "DisplayElement.h"//只用于显示的接口类
#include "Observer.h"//只用于更新数据的接口类
#include "CurrentConditionDisplay.h"//当前温湿度布告板
#include "StatisticsDisplay.h"//统计当前平均/最大/最小温度值的布告板
#include "ForecastDisplay.h" //预测气压布告板
#include "Subject.h"//主题接口类
#include "WeatherDate.h"//具体的主题实现

#include <iostream>
int main() {
	WeatherDate weatherData;
	
	//当使用智能指针时
	//CurrentConditionDisplay currentDisplay(std::shared_ptr<Subject> &weatherData);这里行不通，没有输出，为什么呢？
	//CurrentConditionDisplay(Subject* wd),所以这里也会有动态绑定
	CurrentConditionDisplay currentDisplay(&weatherData);
	StatisticsDisplay statisticsDisplay(&weatherData);
	ForecastDisplay forecastDisplay(&weatherData);
	std::cout << "第一次数据更新，请通知所有的观察者" << std::endl;
	weatherData.setMeasurements(80, 65, 30.4f);//模拟新的气象数据产生
	std::cout << "第二次数据更新，请通知所有的观察者" << std::endl;
	weatherData.setMeasurements(82, 70, 29.2f);//模拟新的气象数据产生
	std::cout << "第三次数据更新，请通知所有的观察者" << std::endl;
	weatherData.setMeasurements(78, 90, 29.2f);//模拟新的气象数据产生
}