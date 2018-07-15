//装饰者和被装饰者都具有相同的Beverage类型
#include "Beverage.h"
//具体实现的被装饰者
#include "Espreso.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Decab.h"
//具体实现的装饰者
#include "CondimentDecorator.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"
#include "Milk.h"

#include<iostream>
using namespace std;
int main() {
	//先来一杯Espreso,显示其价格
	std::shared_ptr<Beverage> beverage(new Espreso());
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	//来一杯DarkRoast，加上两份Mocha,一份Whip
	std::shared_ptr<Beverage> beverage2(new DarkRoast());
	//由于智能指针必须使用直接初始化，并且智能指针的赋值运算符=左右两边都必须是相同类型，
	//所有beverage2 = new Mocha(beverage2);是不行的
	//因为右边返回的类型为Mocha*，而不是std::shared_ptr<Beverage>
	beverage2 = std::shared_ptr<Beverage>(new Mocha(beverage2));
	beverage2  = std::shared_ptr<Beverage>(new Mocha(beverage2));
	beverage2 = std::shared_ptr<Beverage>(new Whip(beverage2));
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	std::shared_ptr<Beverage> beverage3(new HouseBlend());
	beverage3 = std::shared_ptr<Beverage>(new Soy(beverage3));
	beverage3 = std::shared_ptr<Beverage>(new Mocha(beverage3));
	beverage3 = std::shared_ptr<Beverage>(new Whip(beverage3));
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;

	//所有调料的成员类型为普通指针Beverage*时，用法如下：
	/*
	Beverage *beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;
	*/
	system("pause");
	return 0;
}