#pragma once
#include "stdafx.h"
#include <iostream>
#include "Gem.h"

class Emerald : public Gem
{
	int density;
public:
	Emerald();
	void setDensity(int);
	void getDensity();
	~Emerald();
};