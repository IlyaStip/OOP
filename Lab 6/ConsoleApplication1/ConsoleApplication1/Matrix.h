#include <iostream>

using namespace std;

class Matrix
{
	int rows, cols;
	int **value;
public:
	Matrix(int Rows, int Cols);
	~Matrix();
	void Fill();
	void Show();
	friend Matrix operator+(Matrix& a, Matrix& b);

	friend bool operator == (Matrix& a, Matrix& b);

	friend void operator --(Matrix &a);
	int operator ()();

};


