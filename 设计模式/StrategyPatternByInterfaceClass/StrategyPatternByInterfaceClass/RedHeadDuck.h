#pragma once
#ifndef REDHEADDUCK_H
#define REDHEADDUCK_H

#include "Duck.h"

class RedHeadDuck :
	public Duck {
public:
	RedHeadDuck() = default;
	~RedHeadDuck();
	void display() const override;
};


#endif // !REDHEADDUCK_H


