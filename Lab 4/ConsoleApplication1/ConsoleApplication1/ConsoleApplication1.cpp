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

	Gem a("Gem", 12,100);
	a.add();

	Emerald e("Emerald", 20, 122,200);
	e.add();

	Gemstone g("Gemstone", "color",20,300);
	g.add();

	Sardius s("Sardius", "color", 40,50,400);
	s.add();

	a.show();

	system("pause");
	return 0;
};