#include "stdafx.h"
#include <iostream>
#include "sardius.h"

Sardius::Sardius()
{
	std::cout << "����������� ������ ��� ����������" << std::endl;
}

Sardius::Sardius(char* NAME, char* COLOR, int HARDNESS) :Gemstone(NAME, COLOR)
{

	hardness = HARDNESS;
}

void Sardius::setHardness(int HARDNESS)
{
	hardness = HARDNESS;
}

int Sardius::getHardness()
{
	return hardness;
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