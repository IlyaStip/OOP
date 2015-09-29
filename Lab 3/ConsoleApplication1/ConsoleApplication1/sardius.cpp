#include "stdafx.h"
#include <iostream>
#include "sardius.h"

Sardius::Sardius()
{
	std::cout << "Конструктор рубина без параметров" << std::endl;
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
	std::cout << "Деструктор рубина" << std::endl;
}

void Sardius::print()
{
	std::cout << "Имя: " << getName() << std::endl;
	std::cout << "Цвет: " << getColor() << std::endl;
	std::cout << "Прочность: " << getHardness() << std::endl;
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