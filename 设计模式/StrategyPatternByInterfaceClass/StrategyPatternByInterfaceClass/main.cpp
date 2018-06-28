#include <iostream>

//#include "Duck.h"
#include "ModelDuck.h"
#include "RedHeadDuck.h"

//#include "FlyBehavior.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"

//#include "QuackBehavior.h"
#include "MuteQuack.h"
#include "Squeak.h"
int main() {
	ModelDuck model = ModelDuck();//使用合成的默认构造函数建立一个ModelDuck的类

	const std::shared_ptr<FlyBehavior> pFNW(new FlyNoWay);//模型鸭子不会飞
	model.setFlyBehavior(pFNW);

	const std::shared_ptr<Squeak> pS(new Squeak);//模型鸭子会叫
	model.setQuackBehavior(pS);

	model.display();//展示模型鸭子
	model.performFly();//展示模型鸭子的飞行行为
	model.performQuack();//展示模型鸭子的叫的行为

	std::cout << "----------------------" << std::endl;

	RedHeadDuck redHeadDuck = RedHeadDuck();//使用合成的默认构造函数建立一个RedHeadDuck的类

	const std::shared_ptr<FlyBehavior> pFWW(new FlyWithWings);//红头鸭子会飞
	redHeadDuck.setFlyBehavior(pFWW);

	const std::shared_ptr<Squeak> pS1(new Squeak);//红头鸭子会叫
	redHeadDuck.setQuackBehavior(pS1);

	redHeadDuck.display();//展示模型鸭子
	redHeadDuck.performFly();//展示模型鸭子的飞行行为
	redHeadDuck.performQuack();//展示模型鸭子的叫的行为
	
	system("pause");
	return 0;
}