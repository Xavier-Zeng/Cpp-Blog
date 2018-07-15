#include "Whip.h"



Whip::Whip() {
	
}


Whip::~Whip() {
}

double Whip::cost() const {
	//奶泡0.10美元
	////要计算带有Whip饮料的价钱，首先需要委托给被装饰者对象pBeverage，以计算价钱
	//然后加上Whip调料的钱，得到最后结果

	return .10 + pBeverage->cost();
}

std::string Whip::getDescription() const {
	//希望能不仅仅描述调料Whip，还能描述在什么饮料上加调料
	
	return (pBeverage->getDescription() + ", Whip");
}
