#include "stdafx.h"
#include <iostream>
#include "Emerald.h"
#include "Gem.h"

Emerald::Emerald()
{
	std::cout << "����������� �������� ��� ����������" << std::endl;
}

Emerald::Emerald(char* NAME, int WEIGHT, int DENSITY) :Gem(NAME, WEIGHT)
{

	density = DENSITY;
}
void Emerald::setDensity(int DENSITY)
{
	density = DENSITY;
}

int Emerald::getDensity()
{
	return density;
}


Emerald::~Emerald()
{
	std::cout << "���������� ��������" << std::endl;
}

void Emerald::print()
{
	std::cout << "���: " << getName() << std::endl;
	std::cout << "���: " << getWeight() << std::endl;
	std::cout << "���������: " << getDensity() << std::endl;
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