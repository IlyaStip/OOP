#include "stdafx.h"
#include <iostream>
#include "Stone.h"


Stone::Stone(void)
{
	std::cout << "����������� ����� ��� ����������" << std::endl;
}

Stone::Stone(char* NAME,int COST)
{
	name = NAME;
	cost = COST;
	std::cout << "����������� ����� � �����������" << std::endl;
}

Stone::~Stone(void)
{
	std::cout << "���������� �����" << std::endl;
}

Stone *Stone::head = NULL;