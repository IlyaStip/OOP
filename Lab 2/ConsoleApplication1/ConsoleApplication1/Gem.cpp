#include "stdafx.h"
#include <iostream>
#include "Gem.h"

Gem::Gem()
{
	std::cout << "����������� ������������ �����" << std::endl;
}

void Gem::setWeight(int WEIGHT)
{
	weight = WEIGHT;
}

void Gem::getWeight()
{
	std::cout << "���: " << weight << std::endl;
}

Gem::~Gem()
{
	std::cout << "���������� ������������ �����" << std::endl;
}