#pragma once
#ifndef  FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

//这是一个抽象的飞行行为的接口类
class FlyBehavior {

public:
	FlyBehavior();
	~FlyBehavior();
	virtual void fly() const = 0;//pure-virtual+const成员函数，每个飞行行为都要继承并重写该函数
};

#endif // ! FLYBEHAVIOR_H



