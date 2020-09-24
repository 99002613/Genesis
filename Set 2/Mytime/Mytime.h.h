#pragma once

#include "gtest/gtest.h"
class Mytime
{
private:
	int hrs;
	int minutes;
	int sec;
public:
	Mytime();
	Mytime(int, int, int);
	Mytime(int, int);
	Mytime operator + (const Mytime&);
	Mytime operator - (const Mytime&);
	Mytime operator + (int);
	Mytime operator - (int);
	void operator++ ();
	void operator++ (int);
	bool operator == (const Mytime&);
	//Mytime& operator += ();
	Mytime& operator += (const Mytime&);
	bool operator < (const Mytime&);
	bool operator > (const Mytime&);
	void display();
};
