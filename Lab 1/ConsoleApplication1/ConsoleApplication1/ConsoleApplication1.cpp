// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <string.h>
#include <windows.h>
#include "Abiturient.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	std::cout << "���������� ������������" << std::endl;
	std::cin >> n;
	Abiturient *abitur = new Abiturient[n];
	for (int i = 0; i < n; i++){
		int s_phone;
		int s_mark;
		std::string s_lastName;
		std::string s_name;
		std::string s_patronymic;
		std::string s_address;

		abitur[i].set_id(i);

		std::cout << "������� ������ " << i + 1 << "-�� �����������: " << std::endl;

		std::cout << "�������: " << std::endl;
		std::cin >> s_lastName;
		abitur[i].set_lastName(s_lastName);

		std::cout << "���: " << std::endl;
		std::cin >> s_name;
		abitur[i].set_name(s_name);

		std::cout << "��������: " << std::endl;
		std::cin >> s_patronymic;
		abitur[i].set_patronymic(s_patronymic);

		std::cout << "�����: " << std::endl;
		std::cin >> s_address;
		abitur[i].set_address(s_address);

		std::cout << "�������: " << std::endl;
		std::cin >> s_phone;
		abitur[i].set_phone(s_phone);

		std::cout << "����: " << std::endl;
		std::cin >> s_mark;
		abitur[i].set_mark(s_mark);

		abitur[i].get_BadAbiturient();

	}

	delete [] abitur;
	system("pause");
	return 0;
}

