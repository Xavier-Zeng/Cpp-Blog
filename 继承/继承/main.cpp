#include"A.h"
#include"PublicB.h"
#include"ProtectedB.h"
#include"PrivateB.h"
#include"B.h"
#include<iostream>
int main() {
	/*一、测试A类的public、protected、private成员*/
	std::cout << "一、测试A类的public、protected、private成员" << std::endl;
	A a(1,2,3);
	a.funA();
	std::cout << "a.publicValue = " << a.publicValue << std::endl;//正确，类外用户访问A的public成员
	//std::cout << a.protectedValue << std::endl; //错误，类外用户不能访问A的protected成员
	//std::cout << a.privateValue << std::endl;//错误，类外用户不能访问A的private成员
	std::cout << "sizeof(a) = " << sizeof(a) << std::endl;
	std::cout << "------------------华丽的分割线------------------" << std::endl << std::endl;//正确，类外用户访问A的public成员

	/*二、测试PublicB类的public、protected、private成员*/
	std::cout << "二、测试PublicB类的public、protected、private成员" << std::endl;
	PublicB m_publicB(1,2,10,4);//10为PublicB类的private变量
	m_publicB.funB();//正确，类外用户访问PublicB的public成员函数
	std::cout << "m_publicB.publicValueB = " << m_publicB.publicValueB << std::endl;//正确，类外用户访问PublicB的public成员
	std::cout << "m_publicB.publicValue = " << m_publicB.publicValue << std::endl;//正确，类外用户访问PublicB继承A来的public成员,,但是值是多少呢？
	//std::cout << m_publicB.protectedValue << std::endl;//错误，类外用户不能访问PublicB继承A来的protected成员
	//std::cout << m_publicB.privateValue << std::endl;//错误，类外用户不能访问PublicB继承A来的privateValue成员
	std::cout << "sizeof(m_publicB) = " << sizeof(m_publicB) << std::endl;
	std::cout << "------------------华丽的分割线------------------" << std::endl << std::endl;

	/*三、测试ProtectedB类的public、protected、private成员*/
	std::cout << "三、测试ProtectedB类的public、protected、private成员" << std::endl;
	ProtectedB m_protectedB(1,2,11,5);//11为ProtectedB类的private变量
	m_protectedB.funB();//正确，类外用户访问ProtectedB的public成员函数
	std::cout << "m_protectedB.publicValueB = " << m_protectedB.publicValueB << std::endl;//正确，类外用户访问ProtectedB的public成员
	//这里，类外用户访问ProtectedB继承A来的public成员,但在ProtectedB类中变成了protected成员
	//std::cout << "m_protectedB.publicValue = " << m_protectedB.publicValue << std::endl;//错误，类外用户不能访问ProtectedB类的protected成员
	//std::cout << m_publicB.protectedValue << std::endl;//错误，类外用户不能访问ProtectedB继承A来的protected成员，这里变成ProtectedB类的protected成员
	//std::cout << m_publicB.privateValue << std::endl;//错误，类外用户不能访问ProtectedB继承A来的privateValue成员，这里变成ProtectedB类的protected成员
	std::cout << "sizeof(m_protectedB) = " << sizeof(m_protectedB) << std::endl;
	std::cout << "------------------华丽的分割线------------------" << std::endl << std::endl;


	/*四、测试PrivateB类的public、protected、private成员*/
	std::cout << "四、测试PrivateB类的public、protected、private成员" << std::endl;
	PrivateB m_privateB(1,2,12,6);//12为PrivateB类的private变量
	m_privateB.funB();//正确，类外用户访问ProtectedB的public成员函数
	std::cout << "m_privateB.publicValueB = " << m_privateB.publicValueB << std::endl;//正确，类外用户访问m_privateB的public成员
	//这里，类外用户访问m_privateB继承A来的public成员,但在m_privateB类中变成了private成员
	//std::cout << "m_privateB.publicValue = " << m_privateB.publicValue << std::endl;//错误，类外用户不能访问PrivateB类的private成员
	//std::cout << m_privateB.protectedValue << std::endl;//错误，类外用户不能访问PrivateB继承A来的protected成员,这里变成PrivateB类的private成员
	//std::cout << m_privateB.privateValue << std::endl;//错误，类外用户不能访问PrivateB继承A来的privateValue成员，这里变成PrivateB类的private成员
	std::cout << "sizeof(m_privateB) = " << sizeof(m_privateB) << std::endl;
	std::cout << "------------------华丽的分割线------------------" << std::endl << std::endl;
	
	/*五、测试B类来改变A类的private成员*/
	std::cout << "五、测试B类来改变A类的private成员" << std::endl;
	B b;
	b.print();
	system("pause");
	std::cout << "------------------华丽的分割线------------------" << std::endl << std::endl;
	return 0;
}