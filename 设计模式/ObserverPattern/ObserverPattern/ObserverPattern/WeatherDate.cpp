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

void WeatherDate::registerObserver(const std::shared_ptr<Observer>& rhs) {
	vpOberbers.push_back(rhs);
}

void WeatherDate::removeObserver(const std::shared_ptr<Observer>& rhs) {
	//取消订阅
	if (!vpOberbers.empty()) {
		for (auto iter = vpOberbers.begin(); iter != vpOberbers.end(); ++iter) {
			if (*iter == rhs)
				//注意erase方法只能删除迭代器
				vpOberbers.erase(iter);

		}
	}
		
}

void WeatherDate::notifyObserver() {
	//使用auto遍历每一个成员
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
