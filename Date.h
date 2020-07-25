#pragma once
#include<iostream>
#include<string>
using namespace std;
class Date//Class of Date
{
	int day;//Integer type day
	int month;//Integer type month
	int year;//Integer type year
public:
	Date();//Default constructor prototype
	Date(int day, int month, int year);//Parameterized constructor prototype
	~Date();//Deconstructor prototype
	int getDay();//To return day function prototype
	int getMonth();//To return month function prototype
	int getYear();//To return year function prototype
	void setDay(int day);//To set day function prototype
	void setMonth(int month);//To set month function prototype
	void setYear(int year);//To set year function prototype
	void display();//Display function prototype
	void check();//To check is the dates are valid function prototype
};
