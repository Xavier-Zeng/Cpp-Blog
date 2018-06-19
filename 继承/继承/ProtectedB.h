#pragma once
#ifndef PROTECTEDB_H
#define PROTECTEDB_H

#include "A.h"
#include<iostream>
class ProtectedB :
	protected A {
public:
	int publicValueB;//ProtectedBµÄpublic³ÉÔ±
	ProtectedB();
	ProtectedB(int pbV);
	void funB();
	~ProtectedB();
};

#endif // !PROTECTEDB_H



