#pragma once
#ifndef DARKROAST_H
#define DARKROAST_H
#include "Beverage.h"
class DarkRoast :
	public Beverage {
public:
	DarkRoast();
	~DarkRoast();
	double cost() const override;
	std::string getDescription() const override;
};
#endif // !DARKROAST_H



