// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <string.h>
#include <iomanip>
#include <windows.h>
#include "Abiturient.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int bal;
	int manul;
	int kolAbitur;
	std::cout << "������ ��� �������������� ���������� (1 ��� 2)" << std::endl;
	std::cin >> manul;
	if (manul == 1){
		int n;
		std::cout << "���������� ������������" << std::endl;
		std::cin >> n;
		int *sumAbitur = new int[n];
		Abiturient *abitur = new Abiturient[n];
		for (int i = 0; i < n; i++){
			std::string s_phone;
			int s_mark_a;
			int s_mark_b;
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
			for (int j = 0; j < s_phone.length(); j++){
				if ((((s_phone[j] - 48) != 1) && ((s_phone[j] - 48) != 2) && ((int)(s_phone[j]) != 50) && ((int)(s_phone[j]) != 51) && ((int)(s_phone[j]) != 52) && ((int)(s_phone[j]) != 53) && ((int)(s_phone[j]) != 54) && ((int)(s_phone[j]) != 55) && ((int)(s_phone[j]) != 56) && ((int)(s_phone[j]) != 57)) || s_phone.length() < 9){
					std::cout << "����� �������� ������ ����� 9 ����" << std::endl;
					std::cout << "�������: " << std::endl;
					std::cin >> s_phone;
				}
			}
			abitur[i].set_phone(s_phone);

			std::cout << "����� �� ��: " << std::endl;
			std::cin >> s_mark_a;
			while (true){
				if (s_mark_a > 300 || s_mark_a < 0){
					std::cout << "����� ������ �� �� �� ������ ��������� 300 � ���� ������ 0" << std::endl;
					std::cout << "����� �� ��: " << std::endl;
					std::cin >> s_mark_a;
				}
				else{
					break;
				}
			}
			abitur[i].set_mark_a(s_mark_a);

			std::cout << "��������: " << std::endl;
			std::cin >> s_mark_b;
			while (true){
				if (s_mark_b > 100 || s_mark_a < 0){
					std::cout << "�������� �� ������ ��������� 100 � ���� ������ 0" << std::endl;
					std::cout << "��������: " << std::endl;
					std::cin >> s_mark_b;
				}
				else{
					break;
				}
			}
			abitur[i].set_mark_b(s_mark_b);
		}
		std::cout << "C����� ������������, ������� �������������������� ������: " << std::endl << std::endl;
		std::cout << "id" << "  �������" << std::setw(10) << "���" << std::setw(18) << " ��������" << std::setw(5) << "��" << "  " << "��������" << "  " << "�����" << std::endl;
		for (int i = 0; i < n; i++){
			abitur[i].get_BadAbiturient();
		}
		std::cout << "____________________________________________________________" << std::endl << std::endl;

		std::cout << "������� ���� ���� ������� ����� ������� ������������: ";
		std::cin >> bal;
		std::cout << "C����� ������������, � ������� ����� ������ ���� ��������: " << std::endl << std::endl;
		std::cout << "id" << "  �������" << std::setw(10) << "���" << std::setw(18) << " ��������" << std::setw(5) << "��" << "  " << "��������" << "  " << "�����" << std::endl;
		for (int i = 0; i < n; i++){
			abitur[i].get_ValAbiturient(bal);
		}
		std::cout << "____________________________________________________________" << std::endl << std::endl;

		std::cout << "������� ����� ������������, ������� ����� ������� ����� ������" << std::endl;
		std::cin >> kolAbitur;
		for (int i = 0; i < n; i++){
			sumAbitur[i] = abitur[i].get_mark_s();
		}
		for (int i = n - 1; i >= 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (sumAbitur[j] > sumAbitur[j + 1])
				{
					std::swap(sumAbitur[j], sumAbitur[j + 1]);
				}
			}
		}
		std::cout << "C����� ������������, ������� ����� ������� ����� ������: " << std::endl << std::endl;
		std::cout << "id" << "  �������" << std::setw(10) << "���" << std::setw(18) << " ��������" << std::setw(5) << "��" << "  " << "��������" << "  " << "�����" << std::endl;
		for (int i = 0; i < kolAbitur; i++){
			abitur[i].get_bestAbiturent(sumAbitur[kolAbitur+1]);
		}
		std::cout << "____________________________________________________________" << std::endl << std::endl;

		delete[] abitur;
	}
	else{
		Abiturient abitur[5];
		int sumAbitur[4];
		abitur[0] = Abiturient(0, "������", "�����", "����������", "��������", "447077796", 237, 78);
		abitur[1] = Abiturient(1, "������", "���������", "�������������", "�������", "123456789", 300, 90);
		abitur[2] = Abiturient(2, "�����������", "���������", "���������", "�����", "987654321", 200, 30);
		abitur[3] = Abiturient(3, "������", "��������", "����������", "�����", "7667236", 300, 100);
		Abiturient c_abitur = abitur[3];

		std::cout << "C����� ������������, ������� �������������������� ������: " << std::endl << std::endl;
		std::cout << "id" << "  �������" << std::setw(10) << "���" << std::setw(18) << " ��������" << std::setw(5) << "��" << "  " << "��������" << "  " << "�����" << std::endl;
		for (int i = 0; i < 4; i++){
			abitur[i].get_BadAbiturient();
		}
		std::cout << "____________________________________________________________" << std::endl << std::endl;

		std::cout << "C����� ������������, � ������� ����� ������ ���� �������� (350): " << std::endl << std::endl;
		std::cout << "id" << "  �������" << std::setw(10) << "���" << std::setw(18) << " ��������" << std::setw(5) << "��" << "  " << "��������" << "  " << "�����" << std::endl;
		for (int i = 0; i < 4; i++){
			abitur[i].get_ValAbiturient(350);
		}
		std::cout << "____________________________________________________________" << std::endl << std::endl;


		std::cout << "C����� ������������, ������� ����� ������� ����� ������: " << std::endl << std::endl;
		for (int i = 0; i < 4; i++){
			sumAbitur[i] = abitur[i].get_mark_s();
		}
		for (int i = 3; i >= 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (sumAbitur[j] > sumAbitur[j + 1])
				{
					std::swap(sumAbitur[j], sumAbitur[j + 1]);
				}
			}
		}

		std::cout << "id" << "  �������" << std::setw(10) << "���" << std::setw(18) << " ��������" << std::setw(5) << "��" << "  " << "��������" << "  " << "�����" << std::endl;
		for (int i = 0; i < 4; i++){
			abitur[i].get_bestAbiturent(sumAbitur[2]);
		}
		std::cout << "____________________________________________________________" << std::endl << std::endl;
	}




	system("pause");
	return 0;
}

