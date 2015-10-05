#include "stdafx.h"
#include <iostream>
#include "Emerald.h"
#include "Gem.h"

Emerald::Emerald()
{
	std::cout << "Конструктор изумруда без параметров" << std::endl;
}

Emerald::Emerald(char* NAME, int WEIGHT, int DENSITY, int COST) :Gem(NAME, WEIGHT, COST)
{
	cost = COST;
	density = DENSITY;
}
void Emerald::setDensity(int DENSITY)
{
	density = DENSITY;
}

void Emerald::setCost(int COST)
{
	cost = COST;
}

int Emerald::getDensity()
{
	return density;
}

int Emerald::getCost() const
{
	return cost;
}

Emerald::~Emerald()
{
	std::cout << "Деструктор изумруда" << std::endl;
}

void Emerald::print()
{
	std::cout << "Имя: " << getName() << std::endl;
	std::cout << "Плотность: " << getDensity() << std::endl;
	std::cout << "Вес: " << getWeight() << std::endl;
	std::cout << "Стоимость: " << getCost() << std::endl;
}

void Emerald::show()
{
	Stone *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}