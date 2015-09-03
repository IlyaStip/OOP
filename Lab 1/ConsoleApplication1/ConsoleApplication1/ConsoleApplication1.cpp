// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
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
	std::cout << "Количество абитуриентов" << std::endl;
	std::cin >> n;
	Abiturient *abitur = new Abiturient[n];
	for (int i = 0; i < n; i++){
		int s_phone;
		int s_mark[4];
		std::string s_lastName;
		std::string s_name;
		std::string s_patronymic;
		std::string s_address;

		abitur[i].set_id(i);

		std::cout << "Введите данные " << i + 1 << "-го абитуриента: " << std::endl;

		std::cout << "Фамилия: " << std::endl;
		std::cin >> s_lastName;
		abitur[i].set_lastName(s_lastName);

		std::cout << "Имя: " << std::endl;
		std::cin >> s_name;
		abitur[i].set_name(s_name);

		std::cout << "Отчество: " << std::endl;
		std::cin >> s_patronymic;
		abitur[i].set_patronymic(s_patronymic);

		std::cout << "Город: " << std::endl;
		std::cin >> s_address;
		abitur[i].set_address(s_address);

		std::cout << "Телефон: " << std::endl;
		std::cin >> s_phone;
		abitur[i].set_phone(s_phone);

		std::cout << "Баллы: " << std::endl;
		for (int i = 0; i < 2; i++){
			std::cout << i+1 << "-го профильного предмета: " << std::endl;
			std::cin >> s_mark[i];
			int tmp = s_mark[i];
			abitur[i].set_mark(tmp);
		}
		std::cout << "По русскому/белорусскому языку: " << std::endl;
		std::cin >> s_mark[2];
		std::cout << "Аттестат: " << std::endl;
		std::cin >> s_mark[3];
		

	}
	std::cout << "Список абитуриентов, имеющих неудовлетворительные оценки: " << std::endl;
	std::cout << "id" << " Фамилия" << "\tИмя" << "\tОтчество" << "\tГород" << "\tТелефон" << "\tЦТ" << " ЦТ" << " ЦТ" << " Аттестат" << std::endl;
	for (int i = 0; i < n; i++){
		if ((abitur[i].get_mark(0) < 20) || (abitur[i].get_mark(1) < 20) || (abitur[i].get_mark(2) < 15)){
			std::cout << abitur[i].get_id() << " " << abitur[i].get_lastName() << "\t" << abitur[i].get_name() << "\t" << abitur[i].get_patronymic() << "\t" << abitur[i].get_address() << "\t" << abitur[i].get_phone() << "\t" << abitur[i].get_mark(0) << "\t" << abitur[i].get_mark(1) << "\t" << abitur[i].get_mark(2) << "\t" << abitur[i].get_mark(3) << std::endl;
		}
	}
	system("pause");
	return 0;
}

