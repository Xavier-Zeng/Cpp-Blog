#include "Mocha.h"



Mocha::Mocha() {
	
}


Mocha::~Mocha() {
}



double Mocha::cost() const {
	//要计算带有Mocha饮料的价钱，首先需要委托给被装饰者对象pBeverage，以计算价钱
	//然后加上Mocha调料的钱，得到最后结果
	return .20 + pBeverage->cost();
}

std::string Mocha::getDescription() const {
	//希望能不仅仅描述调料Mocha，还能描述在什么饮料上加调料
	
	return (pBeverage->getDescription() + ", Mocha");
}
