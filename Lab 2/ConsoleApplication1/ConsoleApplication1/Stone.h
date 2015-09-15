#include "stdafx.h"
#include <iostream>
#include <string.h>


class Stone
{
public:
	Stone();
	void setName(std::string);
	void getName();
	~Stone();

protected:
	std::string name;
};
