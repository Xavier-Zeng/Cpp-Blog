#include "A.h"
#include<iostream>
A::A()
{
}

A::A(int pbV,int ptV, int pvV): 
	publicValue(pbV), protectedValue(ptV), privateValue(pvV)
{
}


A::~A()
{
}

void A::funA()
{
	std::cout << "publicValue = " << publicValue << std::endl;//正确，类内访问public成员
	std::cout << "protectedValue = " << protectedValue << std::endl;//正确，类内访问protected成员
	std::cout << "privateValue = " << privateValue << std::endl;//正确，类内访问private成员
}

