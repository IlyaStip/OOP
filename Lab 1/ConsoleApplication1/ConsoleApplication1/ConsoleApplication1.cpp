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
		int s_id;
		int s_mark[3];
		wchar_t* s_lastName;
		wchar_t*  s_name;
		wchar_t* s_patronymic;
		wchar_t* s_address;

		abitur[i].set_id(i);

		std::cout << "������� ������� �����������: " << std::endl;
		std::wcin >> s_lastName;
		abitur[i].set_lastName(s_lastName);

		std::cout << "������� ��� �����������: " << std::endl;
		std::wcin >> s_name;
		abitur[i].set_name(s_name);

		std::cout << "������� �������� �����������: " << std::endl;
		std::wcin >> s_patronymic;
		abitur[i].set_patronymic(s_patronymic);

		std::cout << "������� ����� �����������: " << std::endl;
		std::wcin >> s_address;
		abitur[i].set_address(s_address);

		std::cout << "������� ������� �����������: " << std::endl;
		std::cin >> s_phone;
		abitur[i].set_phone(s_phone);

		std::cout << "������� ����� �����������: " << std::endl;
		for (int i = 0; i < 2; i++){
			std::cout << "���� " << i+1 << "-�� ����������� ��������: " << std::endl;
			std::cin >> s_mark[i];
			abitur[i].set_mark(s_mark);
		}
		std::cout << "���� �� ��������/������������ �����: " << std::endl;
		std::cin >> s_mark[2];
		std::cout << "���� ��������� ���������: " << std::endl;
		std::cin >> s_mark[3];
		

	}
	std::cout << "������ ������������, ������� �������������������� ������: " << std::endl;
	std::cout << "id" << "\t�������" << "\t���" << "\t��������" << "\t�����" << "\t�������" << "\t1 ��" << "\t2 ��" << "\t3 ��" << "\t��������" << std::endl;
	for (int i = 0; i < n; i++){
		if ((abitur[i].get_mark(0) < 20) || (abitur[i].get_mark(1) < 20) || (abitur[i].get_mark(2) < 15)){
			std::cout << abitur[i].get_id() << "\t" << abitur[i].get_lastName() << "\t" << abitur[i].get_name() << "\t" << abitur[i].get_patronymic() << "\t" << abitur[i].get_address() << "\t" << abitur[i].get_phone() << "\t" << abitur[i].get_mark(0) << "\t" << abitur[i].get_mark(1) << "\t" << abitur[i].get_mark(2) << "\t" << abitur[i].get_mark(3) << std::endl;
		}
	}
	return 0;
}

