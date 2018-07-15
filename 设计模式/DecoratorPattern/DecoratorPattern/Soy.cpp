#include "Soy.h"

Soy::Soy() {
	
}


Soy::~Soy() {
}

double Soy::cost() const {
	//豆浆0.15美元
	////要计算带有Soy饮料的价钱，首先需要委托给被装饰者对象pBeverage，以计算价钱
	//然后加上Soy调料的钱，得到最后结果
	return .15 + pBeverage->cost();
}

std::string Soy::getDescription() const {
	//希望能不仅仅描述调料Soy，还能描述在什么饮料上加调料
	
	return (pBeverage->getDescription() + ", Soy");
}
