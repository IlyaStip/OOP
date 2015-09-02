#include "stdafx.h"
#include "Abiturient.h"

Abiturient::Abiturient()
{
}
void Abiturient::set_id(int ID){
	id = ID;
}
void Abiturient::set_lastName(wchar_t* LASTNAME){
	lastName = LASTNAME;
}
void Abiturient::set_name(wchar_t* NAME){
	name = NAME;
}
void Abiturient::set_patronymic(wchar_t* PATRONYMIC){
	patronymic = PATRONYMIC;
}
void Abiturient::set_address(wchar_t* ADDRESS){
	address = ADDRESS;
}
void Abiturient::set_phone(int PHONE){
	phone = PHONE;
}
void Abiturient::set_mark(int MARK[]){
	for (int i = 1; i <= 4; i++){
		mark[i] = MARK[i];
	}
}
int Abiturient::get_id(){
	return Abiturient::id;
}
wchar_t* Abiturient::get_lastName(){
	return Abiturient::lastName;
}
wchar_t* Abiturient::get_name(){
	return Abiturient::name;
}
wchar_t* Abiturient::get_patronymic(){
	return Abiturient::patronymic;
}
wchar_t* Abiturient::get_address(){
	return Abiturient::address;
}
int Abiturient::get_phone(){
	return Abiturient::phone;
}
int Abiturient::get_mark(int I){
	return Abiturient::mark[I];
}
