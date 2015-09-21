// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Emerald.h"
#include "Gem.h"
#include "gemstone.h"
#include "sardius.h"
#include "Stone.h"
#include <iostream>
#include <locale>




int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Stone a;
	a.setName("Булыга");
	a.getName();
	std::cout << std::endl;
	Gemstone b;
	b.setColor("red");
	b.getColor();
	std::cout << std::endl;
	Emerald c;
	c.setDensity(10);
	c.getDensity();
	std::cout << std::endl;
	Gem d;
	d.setWeight(200);
	d.getWeight();
	std::cout << std::endl;
	Sardius f;
	f.setHardness(56);
	f.getHardness();
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
};