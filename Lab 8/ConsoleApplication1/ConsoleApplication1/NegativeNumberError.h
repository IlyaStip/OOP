#pragma once
#include "Error.h"
#include <string>

class NegativeNumberError : public Error
{


public:
	NegativeNumberError(char *x) { message = x; };
	void show()
	{
		std::cout << "����������: "<< message << std::endl;
	};
};