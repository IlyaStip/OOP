#include "stdafx.h"
#include <iostream>
#include "sardius.h"

Sardius::Sardius()
{
	std::cout << "����������� ������" << std::endl;
}
void Sardius::setHardness(int HARDNESS)
{
	hardness = HARDNESS;
}

void Sardius::getHardness()
{
	std::cout << "���������: " << hardness << std::endl;
}

Sardius::~Sardius()
{
	std::cout << "���������� ������" << std::endl;
}