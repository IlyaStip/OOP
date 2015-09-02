#include "stdafx.h"
#include "Abiturient.h"

Abiturient::Abiturient()
{
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
	for (int i = 0; i <= sizeof(MARK); i++){
		mark[i] = MARK[i];
	}
}
wchar_t* Abiturient::get_lastName(){
	return Abiturient::lastName;
}
int Abiturient::get_phone(){
	return Abiturient::phone;
}