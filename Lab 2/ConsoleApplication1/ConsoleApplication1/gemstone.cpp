#include "stdafx.h"
#include <iostream>
#include "gemstone.h"

Gemstone::Gemstone()
{
	std::cout << "����������� ���������������� �����" << std::endl;
}

void Gemstone::setColor(char* COLOR)
{
	color = COLOR;
}

void Gemstone::getColor()
{
	std::cout << "����: " << color;
}

Gemstone::~Gemstone()
{
	std::cout << "���������� ���������������� �����" << std::endl;
}