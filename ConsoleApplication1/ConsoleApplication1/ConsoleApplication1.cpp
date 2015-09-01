// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);


int _tmain(int argc, _TCHAR* argv[])
{
	int u = 2;
	std::cout << sum(2, 3) << std::endl;
	std::cout << sub(2, 3) << std::endl;
	std::cout << mul(2, 3) << std::endl;
	std::cout << u;
	system("pause");
	return 0;
}

