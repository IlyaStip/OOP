// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include "stdafx.h"
#include "Stone.h"
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;

	Stone stone1("1", 100);
	Stone stone2("2", 200);
	Stone stone3("3", 300);
	Stone stone4("4", 400);
	Stone stone5("5", 500);
	Stone stone6("6", 600);


	vector<Stone> Vectors;
	Vectors.push_back(stone1);
	Vectors.push_back(stone2);
	Vectors.push_back(stone3);
	Vectors.push_back(stone4);
	Vectors.push_back(stone5);
	Vectors.push_back(stone6);
	Vectors.push_back(stone4);
	Vectors.push_back(stone2);


	Vectors.pop_back();

	cout << Vectors[1] << endl;
	Vectors[1] = 7;
	cout << Vectors[1] << endl << endl;

	auto p = Vectors.begin();

	cout << "Выод 1" << endl;
	while (p != Vectors.end())
	{
		cout << *p << endl << endl;
		p++;
	}


	vector<Stone> vectors1;

	Stone stone11("1", 100);
	Stone stone22("2", 200);
	Stone stone33("3", 300);
	Stone stone44("764", 400);


	vectors1.push_back(stone11);
	vectors1.push_back(stone22);
	vectors1.push_back(stone33);
	vectors1.push_back(stone44);

	auto a = Vectors.begin();

	auto  b = Vectors.begin() + 2;

	Vectors.erase(a, b);


	vector<Stone>::iterator pp = Vectors.begin();

	cout << "Выод 2" << endl;

	while (pp != Vectors.end())
	{
		cout << *pp << endl;
		pp++;
	};


	auto a1 = vectors1.begin();


	Vectors.insert(Vectors.begin(), vectors1.begin(), vectors1.end());

	cout << endl;
	cout << endl;

	vector<Stone>::iterator ppp = vectors1.begin();

	cout << "Выод 3" << endl;

	while (ppp != vectors1.end())
	{
		cout << *ppp << endl;
		ppp++;
	};


	system("pause");
	return 0;
}

