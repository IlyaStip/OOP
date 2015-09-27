#pragma once
#include "stdafx.h"
#include <iostream>
#include "gemstone.h"

class Sardius : public Gemstone
{
	int hardness;
public:
	Sardius();
	void setHardness(int);
	void getHardness();
	~Sardius();
};