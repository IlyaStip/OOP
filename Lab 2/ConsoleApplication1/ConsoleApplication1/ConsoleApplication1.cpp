// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Stone.h"
#include "Gem.h"
#include "gemstone.h"
#include "Emerald.h"
#include "sardius.h"
#include <iostream>
#include <locale>




int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Stone a;
	a.setName("������");
	a.getName();
	std::cout << std::endl;
	Gemstone b;
	b.setName("���������������");
	b.getName();
	b.setColor("red");
	b.getColor();
	std::cout << std::endl;
	Emerald c;
	c.setName("�������");
	c.getName();
	c.setWeight(15);
	c.getWeight();
	c.setDensity(10);
	c.getDensity();
	std::cout << std::endl;
	Gem d;
	d.setName("����������� ������");
	d.getName();
	d.setWeight(200);
	d.getWeight();
	std::cout << std::endl;
	Sardius f;
	f.setName("��������������� ������");
	f.getName();
	f.setColor("blue");
	std::cout << std::endl;
	f.getColor();
	f.setHardness(56);
	f.getHardness();
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
};