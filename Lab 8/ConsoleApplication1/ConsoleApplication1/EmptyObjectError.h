#pragma once
#include "Error.h"
#include <string>

class EmptyObjectError : public Error
{


public:
	EmptyObjectError(char *x) { message = x; };
	void show()
	{
		std::cout << "Исключение: "<< message << std::endl;
	};
};