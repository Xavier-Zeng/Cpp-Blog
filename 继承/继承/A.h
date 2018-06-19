#pragma once
#ifndef A_H
#define A_H

class A
{
public:
	int publicValue;
	A();//编译器的默认构造函数
	A(int pbV, int pbV1, int ptV);//自己声明的构造函数
	virtual ~A();//为多态基类声明virtual析构函数
	void funA();
protected:
	int protectedValue;
private:
	int privateValue;
};


#endif // !A_H


