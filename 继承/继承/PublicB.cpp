#include "PublicB.h"

PublicB::PublicB() {
}

PublicB::PublicB(int pbV) :publicValueB(pbV){}
void PublicB::funB() {
	std::cout << "publicValueB = " << publicValueB << std::endl;//正确，public成员
	std::cout << "publicValue = " << publicValue << std::endl;//正确，public继承类访问基类的public成员,但值是多少呢？
	std::cout << "protectedValue = " << protectedValue << std::endl;//正确，public继承类访问基类的protected成员，但值是多少呢？
	//std::cout << "privateValue = " << privateValue << std::endl;//错误，继承类不能访问基类的private成员,本质上是基类的私有成员不能被继承
}

PublicB::~PublicB() {
}
