#pragma once
#include <iostream>
#include "string.h"

class Abiturient{
	int id;
	wchar_t* lastName;
	wchar_t* name;
	wchar_t* patronymic;
	wchar_t* address;
	int phone;
	int mark[3];
public:
	Abiturient();
	void set_id(int);
	void set_lastName(wchar_t*);
	void set_name(wchar_t*);
	void set_patronymic(wchar_t*);
	void set_address(wchar_t*);
	void set_phone(int);
	void set_mark(int*);

	int get_id();
	wchar_t* get_lastName();
	wchar_t* get_name();
	wchar_t* get_patronymic();
	wchar_t* get_address();
	int get_phone();
	int get_mark(int i);

	void get_BadAbiturient();
	void get_ValAbiturient(int);
	void get_bestAbiturent(int, int);
};