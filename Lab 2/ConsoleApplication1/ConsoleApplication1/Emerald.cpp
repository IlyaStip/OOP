#include "stdafx.h"
#include <iostream>
#include "Emerald.h"

Emerald::Emerald()
{
	std::cout << "Конструктор изумруда" << std::endl;
}

void Emerald::setDensity(int DENSITY)
{
	density = DENSITY;
}

void Emerald::getDensity()
{
	std::cout << "Плотность: " << density << std::endl;
}

Emerald::~Emerald()
{
	std::cout << "Деструктор изумруда" << std::endl;
}