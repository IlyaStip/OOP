// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
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
	cout << "Введите количество строк: ";
	cin >> Row;
	cout << "Введите количество столбцов: ";
	cin >> Col;
	Matrix Matrix1(Row, Col);
	Matrix1.SetValue(0, 0, 0);
	Matrix1.Display();
	cout << endl;

	Matrix Matrix2(Row, Col);
	Matrix2.SetValue(0, 0, 0);
	Matrix2.Display();

	cout << "Сумма матриц" << endl;
	Matrix1 + Matrix2;
	Matrix1.Display();

	cout << endl;

	Matrix2--;
	Matrix2.Display();
	cout << endl;

	if (Matrix1 == Matrix2) cout << "Равны" << endl;
	else cout << "Не равны" << endl;
	system("pause");
	return 0;
}





