#pragma once
#include "stdafx.h"
#include "Stone.h"

class Gem : public Stone
{
protected:
	int weight;
public:
	Gem *next;
	Gem(void);
	Gem(char*, int);

	virtual void setName(char*);
	virtual void setWeight(int);
	virtual int getWeight();
	virtual char* getName() const;

	void print(void);
	static void show();
	virtual void add();
	virtual ~Gem(void);
};