#pragma once
#include <iostream>
#include <string>


class Error{
protected:	
	char* message;
public:

	Error(){};
	Error(char *a) { message = a; };
	virtual void show()
	{
		std::cout << "Исключение: " << message << std::endl;
	};
};
