#pragma once
#include "stdafx.h"
#include <iostream>
#include "Gem.h"

class Emerald : public Gem
{
protected:
	int density;
public:
	Emerald(void);
	Emerald(char*, int, int,int,float);

	void setDensity(int);
	void setCost(int);
	void setOpacity(float);
	int getDensity();
	int getCost()const;
	float getOpacity()const;

	void print(void);
	void show(void);
	~Emerald(void);
};