#pragma once
#ifndef MUTEQUACK_H
#define MUTEQUACK_H
#include "QuackBehavior.h"
class MuteQuack :
	public QuackBehavior {
public:
	MuteQuack();
	~MuteQuack();
	void quack() const override;
};

#endif // !MUTEQUACK_H



