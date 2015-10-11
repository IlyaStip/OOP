#pragma once
#include "Stone.h"
#include "Gem.h"

class Necklace : public Stone
{
private:
	Stone* begin;
	Stone* tail;
public:
	Necklace()
	{
		begin = tail = NULL;
		begin = 0;
	};
	~Necklace();

	virtual void setName(char* NAME){ name = NAME;}

	void bubbleSort(Stone *s);
	void col();
	void pop();
	void searchOpacity(float, float);
	void add(Stone*);
	void print();

};