#pragma once

class Stone
{
protected:
	char* name;

	static Stone *head;
public:
	Stone *next;

	Stone(void);
	Stone(char*);

	virtual void setName(char*) = 0;
	virtual  char* getName()const = 0;

	virtual void print(void) = 0;
	virtual void add() = 0;
	virtual ~Stone(void);

};
