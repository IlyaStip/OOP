#pragma once

class Stone
{
protected:
	char* name;
	int cost;
	float opacity;
	static Stone *head;
public:
	Stone *next;

	Stone(void);
	Stone(char*,int,float);

	virtual void setName(char*) = 0;
	virtual void setOpacity(float) = 0;
	virtual void setCost(int)=0;
	virtual char* getName()const = 0;
	virtual float getOpacity()const = 0;
	virtual int getCost()const=0;
	virtual void print(void) = 0;
	virtual void add() = 0;
	virtual ~Stone(void);

};
