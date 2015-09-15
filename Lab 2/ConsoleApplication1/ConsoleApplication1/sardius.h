#include "stdafx.h"
#include <iostream>
#include <string.h>
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