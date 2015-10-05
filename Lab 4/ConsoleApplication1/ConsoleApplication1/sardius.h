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
	Sardius(char*, char*, int, int,int);

	void setHardness(int);
	void setCost(int);
	int getHardness();
	int getCost()const;

	void print(void);
	void show(void);
	~Sardius(void);
};