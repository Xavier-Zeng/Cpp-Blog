#pragma once
#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H
//这是一个用于显示的接口类
class DisplayElement {
public:
	DisplayElement();
	~DisplayElement();
	virtual void display() = 0;
};


#endif // !DISPLAYELEMENT_H


