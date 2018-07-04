#pragma once
#ifndef SUBJECT_H
#include <memory>
class Observer;//前置声明
//定义一个主题Subject的接口类
class Subject {
public:
	Subject();
	virtual ~Subject();
	virtual void registerObserver(const std::shared_ptr<Observer> &rhs) = 0;
	virtual void removeObserver(const std::shared_ptr<Observer> &rhs)= 0;
	virtual void notifyObserver() = 0;
//private:
//	std::shared_ptr<Observer> pObserver;//拥有一个指向Observer的智能指针成员
};


#endif // !SUBJECT_H

#define SUBJECT_H



