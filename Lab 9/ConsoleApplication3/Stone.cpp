#include "stdafx.h"
#include <iostream>
#include "Stone.h"


Stone::Stone(void)
{
}

Stone::Stone(int)
{
}

Stone::Stone(char* NAME, int COST)
{
	name = NAME;
	cost = COST;
}

Stone::~Stone(void)
{
}

void Stone::setName(char* NAME)
{
	name = NAME;
}

char* Stone::getName()
{
	return name;
}

void Stone::setCost(int COST) 
{
	cost = COST;
}

int Stone::getCost() const
{
	return this->cost;
}

Stone Stone::operator+(Stone &a)
{
	Stone result;
	result.cost = a.cost + this->cost;
	result.setName("Результат");
	return result;
}

bool Stone::operator <(const Stone& r) {

	if (this->getCost()<r.getCost())
			return true;                                
	return false;
}

bool Stone::operator >(const Stone& r) {


	if (this->getCost()>r.getCost())
			return true;                               
	return false;
}



bool Stone::operator!=(Stone &a)
{
	return this->cost != a.cost;
}

void Stone::operator=(int a)
{
	this->cost = a;
}

bool Stone::operator==(int a)
{
	return this->cost != a;
}