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
	Sardius(char*, char*, int, int,int,float);

	void setHardness(int);
	void setCost(int);
	void setOpacity(float);
	int getHardness();
	int getCost()const;
	float getOpacity()const;

	void print(void);
	void show(void);
	~Sardius(void);
};