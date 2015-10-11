// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
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

	Gem a("Gem", 12,100,0.7);
	a.add();

	Emerald e("Emerald", 20, 122,200,0.6);
	e.add();

	Gemstone g("Gemstone", "color",20,300,0.5);
	g.add();

	Sardius s("Sardius", "color", 40,50,400,0.3);
	s.add();

	a.show();

	system("pause");
	return 0;
};