#pragma once
#ifndef A_H
#define A_H
class B;//前置声明在A类的定义外！否则会编译出错
class PublicB;
class ProtectedB;
class PrivateB;
class A {
	friend PublicB;
	friend ProtectedB;
	friend PrivateB;
	friend B;
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
	
	void setPrivateValue(int pv);//用此函数验证其他类来改变A类的私有变量
	int privateValue;
};

#endif // !A_H


