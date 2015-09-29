#pragma once
#include "stdafx.h"
#include <iostream>
#include "gemstone.h"

class Sardius : public Gemstone
{
protected:
	int hardness;
public:
	Sardius(void);
	Sardius(char*, char*, int);

	void setHardness(int);
	int getHardness();

	void print(void);
	void show(void);
	~Sardius(void);
};