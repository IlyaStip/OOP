#include "stdafx.h"
#include "Necklace.h"
#include <iostream>


void Necklace::print()
{
	Stone* r;
	r = begin;
	while (r)
	{
		std::cout << std::endl;
		r->print();
		std::cout << std::endl;
		r = r->next;
	}
}

void Necklace::col()
{
	Stone* r = begin;
	int i = 0;
	while (r)
	{
		r = r->next;
		i++;
	}
}

void Necklace::add(Stone* p)
{
	Stone *r;
	r = begin;
	begin = p;
	p->next = r;
}

void Necklace::pop()
{
	if (begin == NULL)
	{
		std::cout << "Стек пуст" << std::endl;
	}
	else
	{
		Stone* e = begin;
		name = begin->getName();
		begin = begin->next;

		delete e;
	}
}

Necklace::~Necklace()
{
	Stone *r;
	while (begin)
	{
		r = begin;
		begin = begin->next;
		delete r;
	}
}

void Necklace::searchOpacity(float a, float b)
{
	Stone *r = begin;
	while (r)
	{
		if ((r->getOpacity() > a) && (r->getOpacity() < b))
		{
			r->print();
		}
		r = r->next;
	}
}

void Necklace::bubbleSort(Stone *s)
{
	unsigned int tmp;
	Stone* p = begin;
	Stone* r = begin;
	while (r)
	{

	}
}