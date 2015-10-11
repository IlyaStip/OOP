#include "stdafx.h"
#include <iostream>
#include "Gem.h"

Gem::Gem(void)
{
	std::cout << "Конструктор драгоценного камня без параметров" << std::endl;
}

Gem::Gem(char* Name, int Weight, int Cost, float OPACITY) : Stone(Name,Cost,OPACITY)
{
	weight = Weight;
	cost = Cost;
	opacity = OPACITY;
	std::cout << "Конструктор драгоценного камня с параметрами" << std::endl;
}

void Gem::setWeight(int WEIGHT)
{
	weight = WEIGHT;
}
void Gem::setName(char* NAME)
{
	name = NAME;
}

void Gem::setCost(int COST)
{
	cost = COST;
}

void Gem::setOpacity(float OPACITY)
{
	opacity = OPACITY;
}

int Gem::getWeight()
{
	return  weight;
}

char* Gem::getName() const
{
	return name;
}

int Gem::getCost() const
{
	return cost;
}

float Gem::getOpacity()const
{
	return opacity;
}

Gem::~Gem()
{
	std::cout << "Деструктор драгоценного камня" << std::endl;
}

void Gem::print()
{
	std::cout << "Имя: " << getName() << std::endl;
	std::cout << "Вес: " << getWeight() << std::endl;
	std::cout << "Стоимость: " << getCost() << std::endl;
	std::cout << "Прозрачность: " << getOpacity() << std::endl;
}

void Gem::show()
{
	Stone *p = head;
	while (p)
	{
		p->print();
		std::cout << std::endl;
		p = p->next;
	}
}

void Gem::add()
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