#include "stdafx.h"
#include <iostream>
#include "Stone.h"

class Gemstone : public Stone
{
	char* color;
public:
	Gemstone();
	void setColor(char*);
	void getColor();
	~Gemstone();
};