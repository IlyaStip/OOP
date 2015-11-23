// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{

	std::vector<int> vectors;
	vectors.push_back(1);
	vectors.push_back(2);
	vectors.push_back(3);
	vectors.push_back(4);
	vectors.push_back(5);

	vectors.pop_back();

	std::cout << vectors[1] << std::endl;
	vectors[1] = 7;
	std::cout << vectors[1] << std::endl << std::endl;

	std::vector<int>::iterator p = vectors.begin();
	while (p != vectors.end())
	{
		std::cout << *p << std::endl << std::endl;
		p++;
	}


	std::vector<int> vectors1;
	vectors1.push_back(1);
	vectors1.push_back(2);
	vectors1.push_back(3);
	vectors1.push_back(4);

	auto a = vectors.begin();

	auto  b = vectors.begin() + 2;

	vectors.erase(a, b);


	std::vector<int>::iterator pp = vectors.begin();
	while (pp != vectors.end())
	{
		std::cout << *pp << std::endl;
		pp++;
	};


	auto a1 = vectors1.begin();


	vectors.insert(vectors.begin(), vectors1.begin(), vectors1.end());

	std::cout << std::endl;
	std::cout << std::endl;

	std::vector<int>::iterator ppp = vectors.begin();
	while (ppp != vectors.end())
	{
		std::cout << *ppp << std::endl;
		ppp++;
	};


	system("pause");
	return 0;
}

