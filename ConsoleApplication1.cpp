// IPcalc.cpp: определяет точку входа для консольного приложения.
//

#pragma once
#include "stdafx.h"
#include "iostream"
#include <string>

void to2(int b, char *a, int pozition)
{
	if (b > 0)
	{
		a[pozition] = (b % 2) + '0';
		pozition--;
		to2(b / 2, a, pozition);
	}
	else
		return;
}
void to10(char *a, int &b, int pozition)
{
	int rc;
	char q[2];
	if (pozition >= 0)
	{
		q[0] = a[pozition];
		q[1] = '\0';
		rc = atof(q);
		b = b + (int(pow(2.0, float(8 - (pozition + 1)))))*rc;
		pozition--;
		to10(a, b, pozition);
	}
	else
		return;
}
char **getss2(int *a)
{
	char **w = new char*[4];
	for (int i = 0; i < 4; i++)
	{
		w[i] = new char[9];
		for (int j = 0; j < 8; j++)
		{
			w[i][j] = '0';
		}
		w[i][8] = '\0';
		to2(a[i], w[i], 7);
		//std::cout << w[i] << std::endl;
	}
	return w;
}
int *chekIPorMASK(char *info)
{
	char *buff = new char;
	int *arr = new int[4];
	int dot = 0;
	int pozition = 0;
	int b = atoi("0\0");
	buff[0] = '\0';
	for (int i = 0; info[i]; i++)
	{
		if (info[i] > 47 && info[i] < 58)
		{
			buff[pozition] = info[i];
			pozition++;
		}
		else if (info[i] == '.')
		{
			buff[pozition] = '\0';
			if (strlen(buff) == 0)	throw "Пустой октет";
			arr[dot] = atoi(buff);
			pozition = 0;
			buff[pozition] = '\0';
			dot++;
			if (dot > 3)	throw " больше 3-х точек";
		}
		else
		{
			throw "Ошибка";
		}
	}
	buff[pozition] = '\0';
	if (strlen(buff) == 0)	throw "Пустая маска";
	arr[dot] = atoi(buff);
	for (int i = 0; i < 4; i++)
	{
		if (arr[i]>255 || arr[i] < 0)	throw "Октет больше 255 или меньше 0";
	}

	return arr;
}
void getID(char **ip, char **mask)
{
	bool rc = true;
	int kol1 = 0;
	for (int i = 0; i < 4 && rc; i++)
	{
		for (int j = 0; j < 8 && rc; j++)
		{
			if (mask[i][j] == '1')
				kol1++;
			else
				rc = false;
		}
	}
	char **ipNet2 = new char*[4];
	int kol1_1 = kol1;
	for (int i = 0; i < 4; i++)
	{
		ipNet2[i] = new char[9];
		for (int j = 0; j < 8; j++)
		{
			if (kol1_1)
			{
				ipNet2[i][j] = ip[i][j];
				kol1_1--;
			}
			else
				ipNet2[i][j] = '0';
		}
		ipNet2[i][8] = '\0';
	}
	char **ipHost2 = new char*[4];
	int kol1_2 = kol1;
	for (int i = 0; i < 4; i++)
	{
		ipHost2[i] = new char[9];
		for (int j = 0; j < 8; j++)
		{
			if (kol1_2)
			{
				ipHost2[i][j] = '0';
				kol1_2--;
			}
			else
				ipHost2[i][j] = ip[i][j];
		}
		ipHost2[i][8] = '\0';
	}
	int ipNet[4];
	int ipHost[4];
	for (int i = 0; i < 4; i++)
	{
		ipNet[i] = 0;
		ipHost[i] = 0;
		to10(ipNet2[i], ipNet[i], 7);
		to10(ipHost2[i], ipHost[i], 7);
	}
	std::cout << "ID сеть: " << ipNet[0] << "." << ipNet[1] << "." << ipNet[2] << "." << ipNet[3] << std::endl;
	std::cout << "ID хост: " << ipHost[0] << "." << ipHost[1] << "." << ipHost[2] << "." << ipHost[3] << std::endl;
}
void chekMask(char **mask)
{
	bool rc = false;
	if (mask[0][0] == '0')	throw "Ошибка";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (mask[i][j] == '1'&&rc)	throw "Прерывание единиц";
			else if (mask[i][j] == '0') rc = true;
		}

	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int *ip = NULL;
	char **w = NULL;
	char **wm = NULL;
	int *mask = NULL;
	try
	{
		
		

		std::string sp;
		std::string sm;

		std::cin >> sp;
		char *p = new char[sp.length() + 1];
		strcpy(p, sp.c_str());
		std::cin >> sm;
		char *m = new char[sm.length() + 1];
		strcpy(m, sm.c_str());
		ip = chekIPorMASK(p);
		mask = chekIPorMASK(m);
		w = getss2(ip);
		wm = getss2(mask);
		chekMask(wm);
		getID(w, wm);
	}
	catch (char *e)
	{
		std::cout << e << std::endl;
	}
	system("pause");
	return 0;
}