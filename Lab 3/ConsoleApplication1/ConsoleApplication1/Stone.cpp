#include "stdafx.h"
#include <iostream>
#include "Stone.h"


Stone::Stone(void)
{
	std::cout << "����������� �����" << std::endl;
}

void Stone::setName(char* NAME)
{
	name = NAME;
}

void Stone::getName()
{
	std::cout << "��� �����: " << name << std::endl;
}

Stone::~Stone()
{
	std::cout << "���������� �����" << std::endl;
}