#include "stdafx.h"
#include <string>
#include "Abiturient.h"

Abiturient::Abiturient()
{
	id = NULL;
	lastName = "";
	name = "";
	patronymic = "";
	address = "";
	phone = NULL;
	mark = NULL;
}
void Abiturient::set_id(int ID){
	id = ID;
}
void Abiturient::set_lastName(std::string  LASTNAME){
	lastName = LASTNAME;
}
void Abiturient::set_name(std::string  NAME){
	name = NAME;
}
void Abiturient::set_patronymic(std::string  PATRONYMIC){
	patronymic = PATRONYMIC;
}
void Abiturient::set_address(std::string  ADDRESS){
	address = ADDRESS;
}
void Abiturient::set_phone(int PHONE){
	phone = PHONE;
}
void Abiturient::set_mark(int MARK){
		mark = MARK;
}
int Abiturient::get_id(){
	return Abiturient::id;
}
std::string Abiturient::get_lastName(){
	return Abiturient::lastName;
}
std::string Abiturient::get_name(){
	return Abiturient::name;
}
std::string Abiturient::get_patronymic(){
	return Abiturient::patronymic;
}
std::string Abiturient::get_address(){
	return Abiturient::address;
}
int Abiturient::get_phone(){
	return Abiturient::phone;
}
int Abiturient::get_mark(){
	return Abiturient::mark;
}
void Abiturient::get_BadAbiturient(){
	if (Abiturient::get_mark() < 100){
		std::cout << Abiturient::get_id() << "   " << Abiturient::get_lastName() << "\t" << Abiturient::get_name() << "\t" << Abiturient::get_patronymic() << "\t" << Abiturient::get_mark() << std::endl << std::endl;
	}
}
void Abiturient::get_ValAbiturient(int N){
	bal = N;
	if (Abiturient::get_mark() > bal){
		std::cout << Abiturient::get_id() << "   " << Abiturient::get_lastName() << "\t" << Abiturient::get_name() << "\t" << Abiturient::get_patronymic() << "\t" << Abiturient::get_mark() << std::endl << std::endl;
	}
}
Abiturient::~Abiturient(){
	std::cout << "Деструктор" << std::endl;
}
