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
	int bal;
	std::cout << "Количество абитуриентов" << std::endl;
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

		std::cout << "Балл: " << std::endl;
		std::cin >> s_mark;
		abitur[i].set_mark(s_mark);

	}
	std::cout << "Cписок абитуриентов, имеющих неудовлетворительные оценки: " << std::endl << std::endl;
	std::cout << "id" << " Фамилия" << "\tИмя" << "\tОтчество" << "\tБалл" << std::endl;
	for (int i = 0; i < n; i++){
		abitur[i].get_BadAbiturient();
	}
	std::cout << "Введите балл выше которго нужно вывести абитуриентов: "; 
	std::cin >> bal;
	std::cout << "Cписок абитуриентов, у которых сумма баллов выше заданной: " << std::endl << std::endl;
	std::cout << "id" << " Фамилия" << "\tИмя" << "\tОтчество" << "\tБалл" << std::endl;
	for (int i = 0; i < n; i++){
		abitur[i].get_ValAbiturient(bal);
	}



	delete [] abitur;
	system("pause");
	return 0;
}

