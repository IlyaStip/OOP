#include "stdafx.h"
#include <iostream>
#include "gemstone.h"

Gemstone::Gemstone()
{
	std::cout << "Конструктор полудрагоценного камня без параметров" << std::endl;
}

Gemstone::Gemstone(char* NAME, char* COLOR, int WEIGHT, int COST) :Stone(NAME,COST)
{
	color = COLOR;
	weight = WEIGHT;
	cost = COST;
	std::cout << "Конструктор полудрагоценного камня с пераметрами" << std::endl;
}

void Gemstone::setColor(char* COLOR)
{
	color = COLOR;
}

void Gemstone::setName(char* NAME)
{
	name = NAME;
}

void Gemstone::setWeight(int WEIGHT)
{
	weight = WEIGHT;
}

void Gemstone::setCost(int COST)
{
	cost = COST;
}

char* Gemstone::getColor()
{
	return color;
}

char* Gemstone::getName() const
{
	return name;
}

int Gemstone::getWeight() const
{
	return weight;
}

int Gemstone::getCost() const
{
	return cost;
}

Gemstone::~Gemstone()
{
	std::cout << "Деструктор полудрагоценного камня" << std::endl;
}

void Gemstone::print()
{
	std::cout << "Имя: " << getName() << std::endl;
	std::cout << "Цвет: " << getColor() << std::endl;
	std::cout << "Вес: " << getWeight() << std::endl;
	std::cout << "Стоимость: " << getCost() << std::endl;
}

void Gemstone::show()
{
	Stone *p = head;
	while (p)
	{
		p->print();
		std::cout << std::endl;
		p = p->next;
	}
}

void Gemstone::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Stone *q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		}
	}
}