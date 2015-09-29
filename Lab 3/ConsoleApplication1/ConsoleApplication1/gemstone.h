#pragma once
#include "stdafx.h"
#include <iostream>
#include "Stone.h"

class Gemstone : public Stone
{
protected:
	char* color;
public:
	Gemstone *next;
	Gemstone(void);
	Gemstone(char*, char*);

	virtual void setName(char*);
	virtual void setColor(char*);
	virtual char* getColor();
	virtual char* getName()const;

	void print(void);
	static void show();
	virtual void add();
	virtual ~Gemstone(void);
};