#pragma once
#include"Date.h"
#include<fstream>
class Product
{
protected:
	string name;//String object
	int ID;//Integer type
	Date Manufactory;//Date object
	Date Expiry;//Date object
public:
	Product();//Defaul Constructor
	Product(string name, int ID, Date Manufactory, Date Expiry);//Parameterized constructor
	~Product();//Deconstructor
	string getName();//To get name
	int getID();//To get ID
	Date getManufactory();//To get manufactory date
	Date getExpiry();//To get expiry date
	void setName(string name);//To set name
	void setID(int ID);//To set ID
	void setManufactory(Date Manufactory);//To set manufactory date
	void setExpiry(Date Expiry);//To set expiry date
	virtual void display() = 0;//Display function
	void operator+(int add);//+ operator overloaded
};

