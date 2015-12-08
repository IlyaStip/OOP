// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include "stdafx.h"
#include "Stone.h"
#include <vector>
#include <list>
#include <algorithm>

bool over(const Stone& lv, const Stone& rv){ return lv.cost > rv.cost; };
bool less(const Stone& lv, const Stone& rv){ return lv.cost < rv.cost; };
bool overNum(const Stone& rv){ return rv.getCost() >100; };
bool equal(const Stone& lv, const Stone& rv){ return lv.cost ==100; };


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	using namespace std;

	Stone stone1(" 1", 100);
	Stone stone2(" 2", 200);
	Stone stone3(" 3", 300);
	Stone stone4(" 4", 400);
	Stone stone5(" 5", 500);
	Stone stone6(" 6", 600);


	list<Stone> List, ListIf;

	List.push_back(stone4);
	List.push_back(stone2);
	List.push_back(stone6);

	for (auto i = List.begin(); i != List.end(); ++i)
	{
		cout << " Значение:\n " << *i << endl;
	};

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"  << endl;

	List.sort(over);

	for (auto i = List.begin(); i != List.end(); ++i)
	{
		cout << " Значение:\n " << *i << endl;
	};

	List.sort();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	for (auto i = List.begin(); i != List.end(); ++i)
	{
		cout << " Значение:\n " << *i << endl;
	};



	vector<Stone> vectr;
	vectr.push_back(stone1);
	vectr.push_back(stone2);
	vectr.push_back(stone3);
	vectr.push_back(stone4);
	sort(vectr.begin(), vectr.end());
	vector<Stone> vectr_2(vectr.size() + List.size());

	for (auto i = vectr.begin(); i != vectr.end(); ++i)
		cout << "Значение!: " << *i << endl;
	cout << "######################" << endl;
	auto res_end = merge(List.begin(), List.end(), vectr.begin(), vectr.end(), vectr_2.begin());

	for (res_end = vectr_2.begin(); res_end != vectr_2.end(); ++res_end)	 
		cout << *res_end << endl;

	int result = std::count_if(vectr_2.begin(), vectr_2.end(), overNum);

	cout << result << endl;
	system("pause");
	return 0;
}

