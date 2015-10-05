#include "stdafx.h"
#include <iostream>
#include "sardius.h"

Sardius::Sardius()
{
	std::cout << "����������� ������ ��� ����������" << std::endl;
}

Sardius::Sardius(char* NAME, char* COLOR, int HARDNESS, int WEIGHT, int COST) :Gemstone(NAME,COLOR,WEIGHT,COST)
{
	name = NAME;
	color = COLOR;
	weight = WEIGHT;
	hardness = HARDNESS;
	cost = COST;
}

void Sardius::setHardness(int HARDNESS)
{
	hardness = HARDNESS;
}

void Sardius::setCost(int COST)
{
	cost = COST;
}

int Sardius::getHardness()
{
	return hardness;
}

int Sardius::getCost() const
{
	return cost;
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