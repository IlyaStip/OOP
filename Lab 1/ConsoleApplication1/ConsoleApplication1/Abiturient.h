#pragma once
#include <iostream>
#include "string.h"

class Abiturient{
	int id;
	std::string lastName;
	std::string name;
	std::string patronymic;
	std::string address;
	int phone;
	int mark[4];
public:
	Abiturient();
	void set_id(int);
	void set_lastName(std::string);
	void set_name(std::string);
	void set_patronymic(std::string);
	void set_address(std::string);
	void set_phone(int);
	void set_mark(int);

	int get_id();
	std::string get_lastName();
	std::string get_name();
	std::string get_patronymic();
	std::string get_address();
	int get_phone();
	int get_mark(int i);

	void get_BadAbiturient();
	void get_ValAbiturient(int);
	void get_bestAbiturent(int, int);
};