#include "stdafx.h"
#include <iostream>
#include "Emerald.h"
#include "Gem.h"

Emerald::Emerald()
{
	std::cout << "����������� ��������" << std::endl;
}

void Emerald::setDensity(int DENSITY)
{
	density = DENSITY;
}

void Emerald::getDensity()
{
	std::cout << "���������: " << density << std::endl;
}

Emerald::~Emerald()
{
	std::cout << "���������� ��������" << std::endl;
}