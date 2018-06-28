#include "PublicB.h"

PublicB::PublicB() {
}

PublicB::PublicB(int pbV, int ptV, int pvV, int pbVB) : A(pbV, ptV, pvV), publicValueB(pbVB) {}
void PublicB::funB() {
	std::cout << "publicValueB = " << publicValueB << std::endl;//正确，public成员
	std::cout << "publicValue = " << publicValue << std::endl;//正确，public继承类访问基类的public成员
	std::cout << "protectedValue = " << protectedValue << std::endl;//正确，public继承类访问基类的protected成员
	std::cout << "privateValue = " << getPrivateValue() << std::endl;//正确，继承类访问基类的public成员函数，从而访问基类的private变量部分.
	std::cout << "privateValue = " << privateValue << std::endl;//正确，继承类通过友元声明能访问基类的private成员
}

PublicB::~PublicB() {
}
