#include "WeatherDate.h"



WeatherDate::WeatherDate() {
}


WeatherDate::~WeatherDate() {
	
}

//void WeatherDate::registerObserver(Observer* rhs) const {
//	vOberbers.push_back(rhs);
//}
//
//void WeatherDate::removeObserver(Observer* rhs) const {
//	int i = vOberbers.size();
//	if (i >= 0) {
//		vOberbers.erase(rhs);
//	}
//}

void WeatherDate::registerObserver(Observer& rhs) {
	//注册为观察者
	std::shared_ptr<Observer> pObserver(&rhs);//转换为智能指针类型
	vpOberbers.push_back(pObserver);
}

void WeatherDate::removeObserver(Observer& rhs) {
	//取消订阅
	std::shared_ptr<Observer> pObserver(&rhs);//转换为智能指针类型
	if (!vpOberbers.empty()) {
		for (auto iter = vpOberbers.begin(); iter != vpOberbers.end(); ++iter) {
			if (*iter == pObserver)
				//注意erase方法只能删除迭代器
				vpOberbers.erase(iter);

		}
	}
		
}

void WeatherDate::notifyObserver() {
	//通知每一个观察者
	//使用auto遍历每一个成员，注意这里要用引用！
	for (auto &i : vpOberbers) {
		i->update(temperature, humidity, pressure);
	}
}



//void WeatherDate::notifyObserver(){
//	//使用auto遍历每一个成员
//	//for (auto &i : vOberbers) {
//	//	i->update(temperature, humidity, pressure);
//	//}
//}

	void WeatherDate::measurementsChanged() {
	notifyObserver();
}

void WeatherDate::setMeasurements(float temperature, float humidity, float pressure) {
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}
