// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{

	std::vector<double> vectors;
	vectors.push_back(1);
	vectors.push_back(2);
	vectors.push_back(3);

	vectors.pop_back();

	std::cout << vectors[1] << std::endl;
	vectors[1] = 7;
	std::cout << vectors[1] << std::endl << std::endl;

	std::vector<double>::iterator p = vectors.begin();
	while (p != vectors.end()) 
	{
		std::cout << *p << std::endl; 
		p++;
	}

	system("pause");
	return 0;
}

