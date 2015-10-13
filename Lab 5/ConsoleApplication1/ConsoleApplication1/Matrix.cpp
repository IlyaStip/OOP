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



void Matrix::Fill()
{
	
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			value[i][j] = (int)rand()% 10 - (10/2);
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

