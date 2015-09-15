#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "Stone.h"

class Gemstone : public Stone
{
	std::string color;
public:
	Gemstone();
	void setColor(std::string);
	void getColor();
	~Gemstone();
};