#include "stdafx.h"
#include <iostream>
#include "Gem.h"

Gem::Gem()
{
	std::cout << "Конструктор драгоценного камня" << std::endl;
}

void Gem::setWeight(int WEIGHT)
{
	weight = WEIGHT;
}

void Gem::getWeight()
{
	std::cout << "Вес: " << weight << std::endl;
}

Gem::~Gem()
{
	std::cout << "Деструктор драгоценного камня" << std::endl;
}