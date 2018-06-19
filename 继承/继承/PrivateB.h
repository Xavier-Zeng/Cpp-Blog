#pragma once
#include "A.h"
#include<iostream>
#ifndef PRIVATEB_H
#define PRIVATEB_H

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



