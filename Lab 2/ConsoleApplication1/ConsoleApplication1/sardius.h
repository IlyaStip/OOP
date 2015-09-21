#include "stdafx.h"
#include <iostream>
#include "Stone.h"

class Sardius : public Stone
{
	int hardness;
public:
	Sardius();
	void setHardness(int);
	void getHardness();
	~Sardius();
};