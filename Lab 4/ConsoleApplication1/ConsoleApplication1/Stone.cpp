#include "stdafx.h"
#include <iostream>
#include "Stone.h"


Stone::Stone(void)
{
	std::cout << "Конструктор камня без параметров" << std::endl;
}

Stone::Stone(char* NAME,int COST,float OPACITY)
{
	name = NAME;
	cost = COST;
	opacity = OPACITY;
	std::cout << "Конструктор камня с параметрами" << std::endl;
}

Stone::~Stone(void)
{
	std::cout << "Деструктор камня" << std::endl;
}

Stone *Stone::head = NULL;