// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

#include "Matrix.h"

#include <cstdlib>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int Row, Col;
	cout << "������� ���������� �����: ";
	cin >> Row;
	cout << "������� ���������� ��������: ";
	cin >> Col;
	Matrix Matrix1(Row, Col);
	Matrix1.Fill();
	Matrix1.Display();
	cout << endl;

	Matrix Matrix2(Row, Col);
	Matrix2.Fill();
	Matrix2.Display();

	cout << "����� ������" << endl;
	Matrix1 + Matrix2;
	Matrix1.Display();

	cout << endl;
	cout << "��������� ���� ��������� �������" << endl;
	Matrix2--;
	Matrix2.Display();
	cout << endl;

	if (Matrix1 == Matrix2) cout << "�����" << endl;
	else cout << "�� �����" << endl;

	cout << Matrix1() << endl;

	system("pause");
	return 0;
}





