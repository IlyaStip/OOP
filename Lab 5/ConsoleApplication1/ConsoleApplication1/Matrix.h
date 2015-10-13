#include <iostream>

using namespace std;

class Matrix
{
	int rows, cols;
	int **value;
public:
	Matrix(int Rows, int Cols);
	~Matrix();
	void SetValue(int Rows, int Cols, int Value);
	int GetValue(int Rows, int Cols);
	void Fill();
	void Display();
	friend void operator+(Matrix& x, Matrix& y)
	{
		for (int i = 0; i<x.rows; i++)
		{
			for (int j = 0; j<x.cols; j++)
			{
				x.value[i][j] = x.value[i][j] + y.value[i][j];
			}
			cout << endl;
		}
	}

	friend bool operator == (Matrix& x, Matrix& y)
	{
			for (int j = 0; j<x.cols; j++)
			{
				if (x.value[0][j] != y.value[0][j]) return false;
			}
			cout << endl;
	}

	friend void operator --(Matrix &x)
	{
		for (int i = 0; i<x.rows; i++)
		{

			for (int j = 0; j<x.cols; j++)
			{
				x.value[i][j] = 0;
			}
			cout << endl;
		}
	}
};
