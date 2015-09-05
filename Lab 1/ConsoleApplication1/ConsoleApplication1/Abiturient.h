#pragma once
#include <iostream>
#include "string.h"

class Abiturient{
	int id;
	std::string lastName;
	std::string name;
	std::string patronymic;
	std::string address;
	std::string phone;
	int mark_a;
	int mark_b;
	int mark_s;
public:
	Abiturient(int, std::string, std::string, std::string, std::string, std::string, int, int);
	Abiturient();
	~Abiturient();
	Abiturient(const Abiturient &);
	void set_id(int);
	void set_lastName(std::string);
	void set_name(std::string);
	void set_patronymic(std::string);
	void set_address(std::string);
	void set_phone(std::string);
	void set_mark_a(int);
	void set_mark_b(int);
	void set_mark_a(int, int);

	int get_id();
	std::string get_lastName();
	std::string get_name();
	std::string get_patronymic();
	std::string get_address();
	std::string get_phone();
	int get_mark_a();
	int get_mark_b();
	int get_mark_s();

	void get_BadAbiturient();
	void get_ValAbiturient(int);
	void get_bestAbiturent(int);
};