#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "Stone.h"

class Emerald : public Stone
{
	int density;
public:
	Emerald();
	void setDensity(int);
	void getDensity();
	~Emerald();
};