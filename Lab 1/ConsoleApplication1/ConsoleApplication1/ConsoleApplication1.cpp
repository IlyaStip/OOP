// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include "Abiturient.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "���������� ������������" << std::endl;
	std::cin >> n;
	Abiturient *abitur = new Abiturient[n];
	for (int i = 0; i < n; i++){
		int s_phone;
		std::cin >> s_phone;
		abitur[i].set_phone(s_phone);
	}
	for (int i = 0; i < n; i++){
		std::cout << abitur[i].get_phone();
	}
	return 0;
}

