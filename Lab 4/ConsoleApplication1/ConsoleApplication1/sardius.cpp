#include "stdafx.h"
#include <iostream>
#include "sardius.h"

Sardius::Sardius()
{
	std::cout << "����������� ������ ��� ����������" << std::endl;
}

Sardius::Sardius(char* NAME, char* COLOR, int HARDNESS, int WEIGHT, int COST, float OPACITY) :Gemstone(NAME,COLOR,WEIGHT,COST, OPACITY)
{
	name = NAME;
	color = COLOR;
	weight = WEIGHT;
	hardness = HARDNESS;
	cost = COST;
	opacity = OPACITY;
}

void Sardius::setHardness(int HARDNESS)
{
	hardness = HARDNESS;
}

void Sardius::setCost(int COST)
{
	cost = COST;
}

void Sardius::setOpacity(float OPACITY)
{
	opacity = OPACITY;
}

int Sardius::getHardness()
{
	return hardness;
}

int Sardius::getCost() const
{
	return cost;
}

float Sardius::getOpacity()const
{
	return opacity;
}

Sardius::~Sardius()
{
	std::cout << "���������� ������" << std::endl;
}

void Sardius::print()
{
	std::cout << "���: " << getName() << std::endl;
	std::cout << "����: " << getColor() << std::endl;
	std::cout << "���������: " << getHardness() << std::endl;
	std::cout << "���: " << getWeight() << std::endl;
	std::cout << "���������: " << getCost() << std::endl;
	std::cout << "������������: " << getOpacity() << std::endl;
}

void Sardius::show()
{
	Stone *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}