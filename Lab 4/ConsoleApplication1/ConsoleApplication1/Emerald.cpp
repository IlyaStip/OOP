#include "stdafx.h"
#include <iostream>
#include "Emerald.h"
#include "Gem.h"

Emerald::Emerald()
{
	std::cout << "����������� �������� ��� ����������" << std::endl;
}

Emerald::Emerald(char* NAME, int WEIGHT, int DENSITY, int COST,float OPACITY) :Gem(NAME, WEIGHT, COST,OPACITY)
{
	cost = COST;
	density = DENSITY;
	opacity = OPACITY;
}
void Emerald::setDensity(int DENSITY)
{
	density = DENSITY;
}

void Emerald::setCost(int COST)
{
	cost = COST;
}

void Emerald::setOpacity(float OPACITY)
{
	opacity = OPACITY;
}

int Emerald::getDensity()
{
	return density;
}

int Emerald::getCost() const
{
	return cost;
}

float Emerald::getOpacity()const
{
	return opacity;
}

Emerald::~Emerald()
{
	std::cout << "���������� ��������" << std::endl;
}

void Emerald::print()
{
	std::cout << "���: " << getName() << std::endl;
	std::cout << "���������: " << getDensity() << std::endl;
	std::cout << "���: " << getWeight() << std::endl;
	std::cout << "���������: " << getCost() << std::endl;
	std::cout << "������������: " << getOpacity() << std::endl;
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