#include "stdafx.h"
#include <iostream>
#include "Stone.h"


Stone::Stone(void)
{
	std::cout << "����������� ����� ��� ����������" << std::endl;
}

Stone::Stone(char* NAME)
{
	name = NAME;
	std::cout << "����������� ����� � �����������" << std::endl;
}

Stone::~Stone(void)
{
	std::cout << "���������� �����" << std::endl;
}

Stone *Stone::head = NULL;