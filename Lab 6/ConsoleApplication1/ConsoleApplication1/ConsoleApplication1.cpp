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
	Matrix1.Fill();
	Matrix1.Show();
	cout << endl;

	Matrix Matrix2(Row, Col);
	Matrix2.Fill();
	Matrix2.Show();

	cout << "Сумма матриц" << endl;
	//Matrix1 + Matrix2;
	Matrix a = Matrix1 + Matrix2;
	Matrix1.Show();

	cout << endl;
	cout << "обнуление всех элементов матрицы" << endl;
	Matrix2--;
	Matrix2.Show();
	cout << endl;

	if (Matrix1 == Matrix2) cout << "Равны" << endl;
	else cout << "Не равны" << endl;

	cout << Matrix1() << endl;

	system("pause");
	return 0;
}





