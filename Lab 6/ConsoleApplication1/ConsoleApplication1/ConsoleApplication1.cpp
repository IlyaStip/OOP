// ConsoleApplication1.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <cstdlib>
#include "Stone.h"


template<class T>
class Matrix
{
	int rows, cols;
	T **value;
public:
	Matrix(int Rows, int Cols);
	~Matrix();
	void Fill();
	void Show();

	void operator + (Matrix<T> &a);

	bool operator == (Matrix<T> &a);

	void operator - (Matrix &a);
	int operator ()();

};

template<class T>
Matrix<T>::Matrix(int ROWS, int COLS)
{
	rows = ROWS;
	cols = COLS;
	value = new T *[rows];
	for (int i = 0; i<rows; i++)
	{
		value[i] = new T[cols];
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
void Matrix<T>::Fill()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			value[i][j] = (int)rand();
		}
	}
}

template<class T>
int Matrix<T>::operator()()
{
	int min = 0;
	for (int i = 0; i<this->rows; i++)
	{
		for (int j = 0; j<this->cols; j++)
		{
			if (this->value[i][j] < 10) min++;
		}
	}
	return min;
}

template<class T>
void Matrix<T>::Show()
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
void Matrix<T>::operator+(Matrix& b)
{

	for (int i = 0; i<b.rows; i++)
	{
		for (int j = 0; j<b.cols; j++)
		{
			this->value[i][j] = this->value[i][j] + b.value[i][j];
		}
	}
}

template<class T>
bool Matrix<T>::operator==(Matrix& a)
{
	for (int j = 0; j<a.cols; j++)
	{
		if (this->value[0][j] != a.value[0][j]) return false;
	}
}

template<class T>
void Matrix<T>::operator-(Matrix& a)
{

		for (int j = 0,i =0; i<a.cols; i++)
		{
			a.value[i][j] = 0;
		}
		cout << endl;
}



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int Row, Col;
	cout << "Введите количество столбцов: ";
	cin >> Row;
	cout << "Введите количество строк: ";
	cin >> Col;
	Matrix<Stone> Matrix1(Row, Col);
	Matrix1.Fill();
	Matrix1.Show();
	cout << endl;

	Matrix<Stone> Matrix2(Row, Col);
	Matrix2.Fill();
	Matrix2.Show();

	cout << "Сумма матриц" << endl;
	Matrix1 + Matrix2;
	Matrix1.Show();

	cout << endl;
	cout << "Обнуление первого столбца матрицы" << endl;
	Matrix2-Matrix2;
	Matrix2.Show();
	cout << endl;

	if (Matrix1 == Matrix2) cout << "Равны" << endl;
	else cout << "Не равны" << endl;

	cout << Matrix1() << endl;
	
	system("pause");
	return 0;
}





