#include "PublicB.h"

PublicB::PublicB() {
}

PublicB::PublicB(int pbV, int ptV, int pvV, int pbVB) : A(pbV, ptV, pvV), publicValueB(pbVB) {}
void PublicB::funB() {
	std::cout << "publicValueB = " << publicValueB << std::endl;//正确，public成员
	std::cout << "publicValue = " << publicValue << std::endl;//正确，public继承类访问基类的public成员,但值是多少呢？
	std::cout << "protectedValue = " << protectedValue << std::endl;//正确，public继承类访问基类的protected成员，但值是多少呢？
	std::cout << "privateValue = " << getPrivateValue() << std::endl;//错误，继承类不能访问基类的private成员.
}

PublicB::~PublicB() {
}
