#pragma once
#ifndef SUBJECT_H
#include <memory>
class Observer;//前置声明
//定义一个主题Subject的接口类
class Subject {
public:
	Subject();
	~Subject();
	virtual void registerObserver(std::shared_ptr<Observer> pObserver) const = 0;
	virtual void removeObserver(std::shared_ptr<Observer> pObserver) const = 0;
	virtual void notifyObserver(std::shared_ptr<Observer> pObserver) const = 0;
private:
	std::shared_ptr<Observer> pObserver;//拥有一个指向Observer的智能指针成员
};


#endif // !SUBJECT_H

#define SUBJECT_H



