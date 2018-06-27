#pragma once
#ifndef PRIVATEB_H
#define PRIVATEB_H
#include "A.h"
#include<iostream>


class PrivateB :
	private A {
public:
	int publicValueB;//ProtectedBµÄpublic³ÉÔ±
	PrivateB(int pbV);
	void funB();
	PrivateB();
	~PrivateB();
};

#endif // !PRIVATEB_H



