#include "stdafx.h"
#include <iostream>
#include "Stone.h"


Stone::Stone(void)
{
	std::cout << "Конструктор камня без параметров" << std::endl;
}

Stone::Stone(int)
{
	std::cout << "Конструктор камня без параметров" << std::endl;
}

Stone::Stone(char* NAME, int COST)
{
	name = NAME;
	cost = COST;
	std::cout << "Конструктор камня с параметрами" << std::endl;
}

Stone::~Stone(void)
{
	std::cout << "Деструктор камня" << std::endl;
}

void Stone::setName(char* NAME)
{
	name = NAME;
}

char* Stone::getName()
{
	return name;
}

void Stone::setCost(int COST)
{
	cost = COST;
}

int Stone::getCost()
{
	return this->cost;
}

Stone Stone::operator+(Stone &a)
{
	Stone result;
	result.cost = a.cost + this->cost;
	result.setName("Результат");
	return result;
}

bool Stone::operator<(int a)
{
	return this->cost < a;
}

bool Stone::operator!=(Stone &a)
{
	return this->cost != a.cost;
}

void Stone::operator<<(Stone &a)
{
	a.getCost();
}