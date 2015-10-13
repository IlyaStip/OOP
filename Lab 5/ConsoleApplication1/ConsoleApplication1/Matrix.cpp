#include "stdafx.h"
#include "stdlib.h"
#include <iostream>
#include <time.h>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(int ROWS, int COLS)
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
	return;
};

Matrix::~Matrix()
{
	for (int i = 0; i<rows; i++)
	{
		delete value[i];
	}
	delete[] value;
};



void Matrix::Fill()
{
	
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			value[i][j] = (int)rand()% 10 - (10/2);
		}
	}
}

int Matrix::operator()()
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

void Matrix::Show()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout << value[i][j] << "  ";
		}
		cout << endl;
	}
	return;
}

Matrix operator+(Matrix& a, Matrix& b)
{
	Matrix c(a.rows,a.cols);
	for (int i = 0; i<a.rows; i++)
	{
		for (int j = 0; j<a.cols; j++)
		{
			c.value[i][j] = a.value[i][j] + b.value[i][j];
		}
	}
	return c;
}

bool operator == (Matrix& a, Matrix& b)
{
	for (int j = 0; j<a.cols; j++)
	{
		if (a.value[0][j] != b.value[0][j]) return false;
	}
}

void operator --(Matrix &a)
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