#pragma once
#ifndef SQUEAK_H
#define SQUEAK_H


#include "QuackBehavior.h"
class Squeak :
	public QuackBehavior {
public:
	Squeak();
	~Squeak();
	void quack() const override;
};


#endif // !SQUEAK_H


