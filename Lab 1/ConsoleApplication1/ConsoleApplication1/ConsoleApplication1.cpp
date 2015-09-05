// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <string.h>
#include <cstdlib>
#include <windows.h>
#include "Abiturient.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	int bal;
	int manul;
	int kolAbitur;
	int sumAbitur=0;
	std::cout << "���������� ������������" << std::endl;
	std::cin >> n;
	Abiturient *abitur = new Abiturient[n];
	std::cout << "������ ��� ������� (1 ��� 2)" << std::endl;
	std::cin >> manul;
	if (manul == 1){
		for (int i = 0; i < n; i++){
			std::string s_phone;
			int s_mark_a;
			int s_mark_b;
			int s_mark_s;
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
			for (int i = 0; i < s_phone.length(); i++){
				if ((((s_phone[i] - 48) != 1) && ((s_phone[i] - 48) != 2) && ((int)(s_phone[i]) != 50) && ((int)(s_phone[i]) != 51) && ((int)(s_phone[i]) != 52) && ((int)(s_phone[i]) != 53) && ((int)(s_phone[i]) != 54) && ((int)(s_phone[i]) != 55) && ((int)(s_phone[i]) != 56) && ((int)(s_phone[i]) != 57)) || s_phone.length() < 9){
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
		std::cout << "id" << " �������" << "\t���" << "\t��������" << "\t��" << "  " << "��������" << "  " << "�����" << std::endl;
		for (int i = 0; i < n; i++){
			abitur[i].get_BadAbiturient();
		}
		std::cout << "������� ���� ���� ������� ����� ������� ������������: ";
		std::cin >> bal;
		std::cout << "C����� ������������, � ������� ����� ������ ���� ��������: " << std::endl << std::endl;
		std::cout << "id" << " �������" << "\t���" << "\t��������" << "\t��" << "  " << "��������" << "  " << "�����" << std::endl;
		for (int i = 0; i < n; i++){
			abitur[i].get_ValAbiturient(bal);
		}

		std::cout << "������� ����� ������������, ������� ����� ������� ����� ������" << std::endl;
		std::cin >> kolAbitur;
		for (int i = 0; i < n; i++){
			abitur[i].get_bestAbiturent(kolAbitur);
		}
	}
	else{

	}




	delete [] abitur;
	system("pause");
	return 0;
}

