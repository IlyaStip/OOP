#pragma once

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
	bool operator<(int a);
	bool operator!=(Stone &a);
	bool operator==(int a);
	void operator=(int a);
	friend std::ostream& operator<<(std::ostream &stream, const Stone &value) { return stream << value.cost; }
	void setName(char*);
	void setCost(int);
	int getCost();
	char* getName();
	~Stone(void);

};
