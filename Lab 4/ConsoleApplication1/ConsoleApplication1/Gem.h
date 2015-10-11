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
	Gem(char*, int,int,float);

	virtual void setName(char*);
	virtual void setWeight(int);
	virtual void setCost(int);
	virtual void setOpacity(float);
	virtual int getWeight();
	virtual char* getName() const;
	virtual int getCost() const;
	virtual float getOpacity() const;

	void print(void);
	static void show();
	virtual void add();
	virtual ~Gem(void);
};