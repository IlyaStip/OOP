#pragma once
#include <iostream>

class Stone
{
protected:
	char* name;
	int cost;
public:
	Stone *next;
	Stone(int);
	Stone(void);
	Stone(char*, int);
	Stone operator+(Stone &a);
	bool operator< (const Stone& r);
	bool operator> (const Stone& r);
	bool operator!=(Stone &a);
	bool operator==(int a);
	void operator=(int a);
	friend std::ostream& operator<<(std::ostream &stream, const Stone &value) {
		stream << value.cost << std::endl << value.name << std::endl;
		return stream;

	}
	void setName(char*);
	void setCost(int);
	int getCost()const;
	char* getName();
	~Stone(void);

	friend bool over(const Stone& lv, const Stone& rv);
	friend bool less(const Stone& lv, const Stone& rv);
	friend bool overNum(const Stone& rv);
	friend bool equal(const Stone& lv, const Stone& rv);

};
