#include "stdafx.h"
#include <iostream>
#include "gemstone.h"

Gemstone::Gemstone()
{
	std::cout << "Конструктор полудрагоценного камня" << std::endl;
}

void Gemstone::setColor(char* COLOR)
{
	color = COLOR;
}

void Gemstone::getColor()
{
	std::cout << "Цвет: " << color;
}

Gemstone::~Gemstone()
{
	std::cout << "Деструктор полудрагоценного камня" << std::endl;
}