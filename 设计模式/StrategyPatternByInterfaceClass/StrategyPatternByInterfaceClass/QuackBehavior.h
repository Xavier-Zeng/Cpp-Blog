#pragma once
#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H
//这是一个抽象的叫的行为的接口类
class QuackBehavior {
public:
	QuackBehavior();
	~QuackBehavior();
	virtual void quack() const = 0;//pure-virtual+const成员函数，每个具有叫的行为都要继承并重写该函数
};


#endif // !QUACKBEHAVIOR_H

