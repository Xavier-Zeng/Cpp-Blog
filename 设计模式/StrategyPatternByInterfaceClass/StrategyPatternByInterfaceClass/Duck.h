#pragma once
#ifndef DUCK_H
#define DUCK_H
#include <memory>//要是用智能指针，加上这个头文件
//这是一个鸭子类的基类，具体的鸭子类（MallarDuck,RedheadDuck,RubberDuck,DecoyDuck继承该基类）
class FlyBehavior;//飞行行为类的前置声明，不用#include，实现接口与实现分离
class QuackBehavior;//叫的行为类的前置声明，不用#include，实现接口与实现分离
class Duck {
public:
	Duck() = default;//自动合成的默认构造函数
	//自定义的构造函数
	Duck(std::shared_ptr<FlyBehavior> pFB, std::shared_ptr<QuackBehavior> pQB) : pFlyBehavior(pFB), pQuackBehavior(pQB) {}
	virtual void display() const = 0;//pure-virtual + const的接口，具体的鸭子类要继承并复写这个函数
	~Duck();
	void performFly();//返回fly函数
	void performQuack();//返回quack函数
	void setFlyBehavior(const std::shared_ptr<FlyBehavior> rhs);
	void setQuackBehavior(const std::shared_ptr<QuackBehavior> rhs);
private:
	std::shared_ptr<FlyBehavior> pFlyBehavior;//使用智能指针，实现复合（HAS-A的关系），表示Duck类具有一个FlyBehavior行为类
	std::shared_ptr<QuackBehavior> pQuackBehavior;//使用智能指针，实现复合（HAS-A的关系），表示Duck类具有一个QuackBehavior行为类
};


#endif // !DUCK_H

