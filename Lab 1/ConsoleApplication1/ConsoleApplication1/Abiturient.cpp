#include "stdafx.h"
#include <string>
#include "Abiturient.h"


Abiturient::Abiturient()
{
	id = NULL;
	lastName = "Самаль";
	name = "Антон";
	patronymic = "Дмитриевич";
	address = "Сморгонь";
	phone = "447077796";
	mark_a = 150;
	mark_b = 90;
	mark_s = NULL;
	std::cout << "Конструктор без пераметров вызвал id: " << id << std::endl << std::endl;
}
Abiturient::Abiturient(int ID, std::string LASTNAME, std::string NAME, std::string PATRONYMIC, std::string ADDRESS, std::string PHONE, int MARK_A, int MARK_B)
{
	id = ID;
	lastName = LASTNAME;
	name = NAME;
	patronymic = PATRONYMIC;
	address = ADDRESS;
	phone = PHONE;
	mark_a = MARK_A;
	mark_b = MARK_B;
	mark_s = mark_a + mark_b;
	std::cout << "Конструктор с параметрами вызвал id: " << id << std::endl << std::endl;
}
Abiturient::Abiturient(const Abiturient &obj)
{
	id = obj.id;
	lastName = obj.lastName;
	name = obj.name;
	patronymic = obj.patronymic;
	address = obj.address;
	phone = obj.phone;
	mark_a = obj.mark_a;
	mark_b = obj.mark_b;
	mark_s = obj.mark_s;
	std::cout << "Конструктор копирования вызвал id: " << id << std::endl << std::endl;
}
Abiturient::~Abiturient(){
	std::cout << "Деструктор вызвал id: " << id << std::endl << std::endl;
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
void Abiturient::set_phone(std::string PHONE){
	phone = PHONE;
}
void Abiturient::set_mark_a(int MARK){
		mark_a = MARK;
}
void Abiturient::set_mark_b(int MARK){
	mark_b = MARK;
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
std::string Abiturient::get_phone(){
	return Abiturient::phone;
}
int Abiturient::get_mark_a(){
	return Abiturient::mark_a;
}
int Abiturient::get_mark_b(){
	return Abiturient::mark_b;
}
int Abiturient::get_mark_s(){
	return Abiturient::mark_a + Abiturient::mark_b;
}
void Abiturient::get_BadAbiturient(){
	if (Abiturient::get_mark_a() < 100 || Abiturient::get_mark_b() < 50){
		std::cout << Abiturient::get_id() << "   " << Abiturient::get_lastName() << "   " << Abiturient::get_name() << "   " << Abiturient::get_patronymic() << "\t  " << Abiturient::get_mark_a() << "   " << Abiturient::get_mark_b() << "\t " << Abiturient::get_mark_s()<< std::endl;
	}
}
void Abiturient::get_ValAbiturient(int N){
	if (Abiturient::get_mark_s() > N){
		std::cout << Abiturient::get_id() << "   " << Abiturient::get_lastName() << "   " << Abiturient::get_name() << "   " << Abiturient::get_patronymic() << "\t  " << Abiturient::get_mark_a() << "   " << Abiturient::get_mark_b() << "\t " << Abiturient::get_mark_s() << std::endl;
	}
}
void Abiturient::get_bestAbiturent(int N){
	if (Abiturient::get_mark_s() >= N){
		std::cout << Abiturient::get_id() << "   " << Abiturient::get_lastName() << "   " << Abiturient::get_name() << "   " << Abiturient::get_patronymic() << "\t  " << Abiturient::get_mark_a() << "   " << Abiturient::get_mark_b() << "\t " << Abiturient::get_mark_s() << std::endl;
	}
}

