#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "Stone.h"

class Gem : public Stone
{
	int weight;
public:
	Gem();
	void setWeight(int);
	void getWeight();
	~Gem();
};