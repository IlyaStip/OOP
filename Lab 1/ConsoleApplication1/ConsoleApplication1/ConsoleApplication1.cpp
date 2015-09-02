// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include "Abiturient.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Количество абитуриентов" << std::endl;
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

		std::cout << "Введите фамилию абитуриента: " << std::endl;
		std::wcin >> s_lastName;
		abitur[i].set_lastName(s_lastName);

		std::cout << "Введите имя абитуриента: " << std::endl;
		std::wcin >> s_name;
		abitur[i].set_name(s_name);

		std::cout << "Введите отчество абитуриента: " << std::endl;
		std::wcin >> s_patronymic;
		abitur[i].set_patronymic(s_patronymic);

		std::cout << "Введите город абитуриента: " << std::endl;
		std::wcin >> s_address;
		abitur[i].set_address(s_address);

		std::cout << "Введите телефон абитуриента: " << std::endl;
		std::cin >> s_phone;
		abitur[i].set_phone(s_phone);

		std::cout << "Введите баллы абитуриента: " << std::endl;
		for (int i = 0; i < 2; i++){
			std::cout << "Балл " << i+1 << "-го профильного предмета: " << std::endl;
			std::cin >> s_mark[i];
			abitur[i].set_mark(s_mark);
		}
		std::cout << "Балл по русскому/белорусскому языку: " << std::endl;
		std::cin >> s_mark[2];
		std::cout << "Балл школьного аттестата: " << std::endl;
		std::cin >> s_mark[3];
		

	}
	std::cout << "Список абитуриентов, имеющих неудовлетворительные оценки: " << std::endl;
	std::cout << "id" << "\tФамилия" << "\tИмя" << "\tОтчество" << "\tГород" << "\tТелефон" << "\t1 ЦТ" << "\t2 ЦТ" << "\t3 ЦТ" << "\tАттестат" << std::endl;
	for (int i = 0; i < n; i++){
		if ((abitur[i].get_mark(0) < 20) || (abitur[i].get_mark(1) < 20) || (abitur[i].get_mark(2) < 15)){
			std::cout << abitur[i].get_id() << "\t" << abitur[i].get_lastName() << "\t" << abitur[i].get_name() << "\t" << abitur[i].get_patronymic() << "\t" << abitur[i].get_address() << "\t" << abitur[i].get_phone() << "\t" << abitur[i].get_mark(0) << "\t" << abitur[i].get_mark(1) << "\t" << abitur[i].get_mark(2) << "\t" << abitur[i].get_mark(3) << std::endl;
		}
	}
	return 0;
}

