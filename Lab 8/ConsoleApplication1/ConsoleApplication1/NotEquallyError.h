#pragma once
#include "Error.h"
#include <string>

class NotEquallyError : public Error
{


public:
	NotEquallyError(char *x) { message = x; };
	void show()
	{
		std::cout << "����������: " << message << std::endl;
	};
};