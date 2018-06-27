#include "PrivateB.h"



PrivateB::PrivateB(int pbV, int ptV, int pvV, int pbVB) : A(pbV, ptV, pvV),publicValueB(pbVB){
}

void PrivateB::funB() {
	std::cout << "publicValue = " << publicValue << std::endl;//正确，基类public成员,在派生类中变成了private
	std::cout << "protectedValue = " << protectedValue << std::endl;//正确，基类protected成员,在派生类中变成了private
	std::cout << "privateValue = " << privateValue << std::endl;//正确，继承类通过友元声明能访问基类的private成员
	std::cout << "publicValueB = " << publicValueB << std::endl;//正确，public成员
	//funA();
	
}

PrivateB::PrivateB() {
}


PrivateB::~PrivateB() {
}
