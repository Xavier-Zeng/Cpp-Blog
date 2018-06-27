#pragma once
#ifndef A_H
#define A_H

class A {
	class PrivateB;//前置声明
	friend PrivateB;//声明PrivateB类为A类的友元
public:
	int publicValue;
	A();//编译器的默认构造函数
	A(int pbV, int ptV, int pvV);//自己声明的构造函数
	virtual ~A();//为多态基类声明virtual析构函数
	void funA();
	const int& getPrivateValue();//通过public函数返回private变量，这样在子类中就可以通过该函数访问基类的private变量了
protected:
	int protectedValue;
private:
	int privateValue;
};

#endif // !A_H


