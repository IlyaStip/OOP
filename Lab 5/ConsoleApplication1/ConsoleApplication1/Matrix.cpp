#include "stdafx.h"
#include "stdlib.h"
#include <iostream>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(int Rows, int Cols)
{
	rows = Rows;
	cols = Cols;
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

void Matrix::SetValue(int Rows, int Cols, int Value)
{
	if (Rows < 0 || Rows > rows)
		Rows = 0;
	if (Cols < 0 || Cols > cols)
		Cols = 0;
	value[Rows][Cols] = Value;
}

int Matrix::GetValue(int Rows, int Cols)
{
	if (Rows < 0 || Rows > rows)
		Rows = 0;
	if (Cols < 0 || Cols > cols)
		Cols = 0;
	return value[Rows][Cols];
};

void Matrix::Fill()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			value[i][j] = (int)rand();
		}
	}
	return;
}

void Matrix::Display()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout << value[i][j] << "\t";
		}
		cout << endl;
	}
	return;
}

