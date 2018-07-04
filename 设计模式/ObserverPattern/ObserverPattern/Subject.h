#pragma once
#ifndef SUBJECT_H
#define SUBJECT_H

#include <memory>
class Observer;//前置声明
//定义一个主题Subject的抽象接口类
class Subject {
public:
	Subject();
	virtual ~Subject();
	virtual void registerObserver(Observer &rhs) = 0;
	virtual void removeObserver(Observer &rhs)= 0;
	virtual void notifyObserver() = 0;
};


#endif // !SUBJECT_H





