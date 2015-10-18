// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <cstdlib>

template<class T>
class Matrix
{
	int rows, cols;
	int **value;
public:
	Matrix(int Rows, int Cols);
	~Matrix();
	void Fill();
	void Show();

	Matrix<T> operator + (Matrix<T> &a, Matrix<T> &b);

	Matrix<T> operator == (Matrix<T> &a, Matrix<T> &b);

	Matrix<T> operator --(Matrix<T> &a);
	Matrix<T> operator ()();

};

template<class T>
Matrix<T>::Matrix(int ROWS, int COLS)
{
	rows = ROWS;
	cols = COLS;
	value = new int *[rows];
	for (int i = 0; i<rows; i++)
	{
		value[i] = new int[cols];
		for (int j = 0; j<cols; j++)
		{
			value[i][j] = 0;
		}
	}
}

template<class T>
Matrix<T>::~Matrix()
{
	for (int i = 0; i<rows; i++)
	{
		delete value[i];
	}
	delete[] value;
}

template<class T>
Matrix<T>::Fill()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			value[i][j] = (int)rand() % 10 - (10 / 2);
		}
	}
}

template<class T>
Matrix<T>::operator()()
{
	int min = 0;
	for (int i = 0; i<this->rows; i++)
	{
		for (int j = 0; j<this->cols; j++)
		{
			if (this->value[i][j] < 0) min++;
		}
	}
	return min;
}

template<class T>
Matrix<T>::Show()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout << value[i][j] << "  ";
		}
		cout << endl;
	}
}

template<class T>
Matrix<T> Matrix<T>::operator+(Matrix& a, Matrix& b)
{
	Matrix c(a.rows, a.cols);
	for (int i = 0; i<a.rows; i++)
	{
		for (int j = 0; j<a.cols; j++)
		{
			c.value[i][j] = a.value[i][j] + b.value[i][j];
		}
	}
}

template<class T>
Matrix<T> Matrix<T>::operator==(Matrix& a, Matrix& b)
{
	for (int j = 0; j<a.cols; j++)
	{
		if (a.value[0][j] != b.value[0][j]) return false;
	}
}

template<class T>
Matrix<T>::operator--(Matrix& a)
{
	for (int i = 0; i<a.rows; i++)
	{

		for (int j = 0; j<a.cols; j++)
		{
			a.value[i][j] = 0;
		}
		cout << endl;
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int Row, Col;
	cout << "Введите количество строк: ";
	cin >> Row;
	cout << "Введите количество столбцов: ";
	cin >> Col;
	Matrix<int> Matrix1(Row, Col);
	Matrix1.Fill();
	Matrix1.Show();
	cout << endl;

	Matrix<int> Matrix2(Row, Col);
	Matrix2.Fill();
	Matrix2.Show();

	cout << "Сумма матриц" << endl;
	//Matrix1 + Matrix2;
	//Matrix<Matrix> a = Matrix1 + Matrix2;
	//Matrix1.Show();

	cout << endl;
	cout << "обнуление всех элементов матрицы" << endl;
	//Matrix2--;
	Matrix2.Show();
	cout << endl;

	/*if (Matrix1 == Matrix2) cout << "Равны" << endl;
	else cout << "Не равны" << endl;

	cout << Matrix1() << endl;
*/
	system("pause");
	return 0;
}





