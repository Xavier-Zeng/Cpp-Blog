#include "B.h"
#include "A.h"
#include<iostream>


B::B() {
}


B::~B() {
}

void B::print() {
	A a(1, 2, 3);
	a.setPrivateValue(5);//改变a的私有变量
	std::cout << "a.privateValue = " << a.privateValue << std::endl;//输出a的私有变量的值
}
