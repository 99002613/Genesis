#include "time.h"
#include <iostream>
using namespace std;

Mytime::Mytime() :
	hrs(0), minutes(0), sec(0)
{ }
Mytime::Mytime(int x, int y, int z) :
	hrs(x), minutes(y), sec(z)
{ }
Mytime::Mytime(int x, int y) :
	hrs(x), minutes(y), sec(0)
{ }
Mytime Mytime :: operator+(const Mytime& ref_val)
{
	int tmins = minutes + ref_val.minutes;
	int thrs = hrs + ref_val.hrs;
	return Mytime(thrs, tmins);
}
Mytime  Mytime ::operator - (const Mytime& ref_val)
{
	int tmins = minutes - ref_val.minutes;
	int thrs = hrs - ref_val.hrs;
	return Mytime(thrs, tmins);
}
Mytime  Mytime:: operator + (int nmins)
{
	int tmins = minutes + nmins; // TODO: tmins > 60
	int thrs = hrs;
	return Mytime(thrs, tmins);
}
Mytime  Mytime ::operator - (int nmins)
{
	int tmins = minutes - nmins; // TODO: tmins > 60
	int thrs = hrs;
	return Mytime(thrs, tmins);
}
void  Mytime :: operator++ ()
{

	this->minutes = (this->minutes) + 1;
	if ((this->minutes) > 60)
	{
		this->hrs += 1;
		this->minutes -= 60;
	}
}
void  Mytime ::operator++ (int data)
{
	this->minutes += data;
	if ((this->minutes) > 60)
	{
		this->hrs += 1;
		this->minutes -= 60;
	}

}
bool Mytime ::   operator == (const Mytime& ref_val)
{
	return hrs == ref_val.hrs && minutes == ref_val.minutes;
}
/*Mytime :: Mytime & operator += ()
{
	return *this;
}
*/
Mytime& Mytime :: operator += (const Mytime& ref_val)
{
	hrs += ref_val.hrs;
	minutes += ref_val.minutes;
	return *this;
}
bool Mytime ::  operator < (const Mytime& ref_val)
{
	return hrs < ref_val.hrs && minutes < ref_val.minutes;
}
bool Mytime ::  operator > (const Mytime& ref_val)
{
	return hrs > ref_val.hrs && minutes > ref_val.minutes;
}
void Mytime::display()
{
	cout << " Hours: " << hrs << "Minutes: " << minutes << "Minutes: " << sec;
}
