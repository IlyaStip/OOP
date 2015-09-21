#include "stdafx.h"
#include <iostream>
#include "Stone.h"


Stone::Stone(void)
{
	std::cout << "Конструктор камня" << std::endl;
}

void Stone::setName(char* NAME)
{
	name = NAME;
}

void Stone::getName()
{
	std::cout << "Имя камня: " << name << std::endl;
}

Stone::~Stone()
{
	std::cout << "Деструктор камня" << std::endl;
}