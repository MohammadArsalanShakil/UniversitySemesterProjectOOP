#include "Date.h"



Date::Date()
{
}

Date::Date(int day, int month, int year)//Parameterized constructor defination
{
	this->day = day;
	this->month = month;
	this->year = year;
}


Date::~Date()
{
}

int Date::getDay()//To return day function defination
{
	return day;
}

int Date::getMonth()//To return month function defination
{
	return month;
}

int Date::getYear()//To return year function defination
{
	return year;
}

void Date::setDay(int day)//To set day function defination
{
	this->day = day;
}

void Date::setMonth(int month)//To set month function defination
{
	this->month = month;
}

void Date::setYear(int year)//To set year function defination
{
	this->year = year;
}

void Date::display()//Display function defination
{
	cout << "Date : " << day << "//" << month << "//" << year << endl;
}

void Date::check()//Check function defination
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 11)
	{
		if (day > 31)
		{
			cout << "Wrong day entered " << endl;
			day = day - 31;
		}
		if (month > 12)
		{
			cout << "Wrong month entered " << endl;
			month = month - 12;
		}
	}
	else if (month == 4 || month == 6 || month == 8 || month == 10 || month == 12)
	{
		if (day > 31)
		{
			cout << "Wrong day entered " << endl;
			day = day - 30;
		}
		if (month > 12)
		{
			cout << "Wrong month entered " << endl;
			month = month - 12;
		}
	}
	else if (month == 2)
	{
		if (day > 31)
		{
			cout << "Wrong day entered " << endl;
			day = day - 28;
		}
		if (month > 12)
		{
			cout << "Wrong month entered " << endl;
			month = month - 12;
		}
	}
}
