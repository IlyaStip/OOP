#include "stdafx.h"
#include <iostream>
#include "Stone.h"


Stone::Stone(void)
{
	std::cout << "����������� ����� ��� ����������" << std::endl;
}

Stone::Stone(char* NAME,int COST,float OPACITY)
{
	name = NAME;
	cost = COST;
	opacity = OPACITY;
	std::cout << "����������� ����� � �����������" << std::endl;
}

Stone::~Stone(void)
{
	std::cout << "���������� �����" << std::endl;
}

Stone *Stone::head = NULL;