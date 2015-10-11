#pragma once
#include "stdafx.h"
#include <iostream>
#include "Stone.h"

class Gemstone : public Stone
{
protected:
	char* color;
	int weight;
public:
	Gemstone *next;
	Gemstone(void);
	Gemstone(char*, char*,int,int,float);

	virtual void setName(char*);
	virtual void setColor(char*);
	virtual void setWeight(int);
	virtual void setCost(int);
	virtual void setOpacity(float);
	virtual char* getColor();
	virtual char* getName()const;
	virtual int getWeight()const;
	virtual int getCost()const;
	virtual float getOpacity()const;

	void print(void);
	static void show();
	virtual void add();
	virtual ~Gemstone(void);
};