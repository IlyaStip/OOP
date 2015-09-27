#include "stdafx.h"
#include <iostream>
#include "sardius.h"

Sardius::Sardius()
{
	std::cout << "Конструктор рубина" << std::endl;
}
void Sardius::setHardness(int HARDNESS)
{
	hardness = HARDNESS;
}

void Sardius::getHardness()
{
	std::cout << "Твердость: " << hardness << std::endl;
}

Sardius::~Sardius()
{
	std::cout << "Деструктор рубина" << std::endl;
}