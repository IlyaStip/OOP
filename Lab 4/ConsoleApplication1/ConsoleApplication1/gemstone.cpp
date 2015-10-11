#include "stdafx.h"
#include <iostream>
#include "gemstone.h"

Gemstone::Gemstone()
{
	std::cout << "����������� ���������������� ����� ��� ����������" << std::endl;
}

Gemstone::Gemstone(char* NAME, char* COLOR, int WEIGHT, int COST,float OPACITY) :Stone(NAME,COST,OPACITY)
{
	color = COLOR;
	weight = WEIGHT;
	cost = COST;
	opacity = OPACITY;
	std::cout << "����������� ���������������� ����� � �����������" << std::endl;
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

void Gemstone::setOpacity(float OPACITY)
{
	opacity = OPACITY;
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

float Gemstone::getOpacity() const
{
	return opacity;
}

Gemstone::~Gemstone()
{
	std::cout << "���������� ���������������� �����" << std::endl;
}

void Gemstone::print()
{
	std::cout << "���: " << getName() << std::endl;
	std::cout << "����: " << getColor() << std::endl;
	std::cout << "���: " << getWeight() << std::endl;
	std::cout << "���������: " << getCost() << std::endl;
	std::cout << "������������: " << getOpacity() << std::endl;
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