#pragma once
#ifndef PUBLICB_H
#define PUBLICB_H

//如果要接口与实现分离，pimp方法不应该用include方法，
//应使用前置声明class A;
//这里我们只讨论public、protected、private，不讨论接口与实现分离
#include "A.h"  
#include<iostream>
//PublicB以public方式继承A
class PublicB :
	public A {
public:
	int publicValueB;//PublicB的public成员
	PublicB();
	PublicB(int pbV);
	void funB();
	~PublicB();
};

#endif // !PUBLICB_H



