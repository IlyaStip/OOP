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
	Emerald(char*, int, int,int);

	void setDensity(int);
	void setCost(int);
	int getDensity();
	int getCost()const;

	void print(void);
	void show(void);
	~Emerald(void);
};