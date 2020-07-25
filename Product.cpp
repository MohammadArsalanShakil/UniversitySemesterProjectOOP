#include "Product.h"



Product::Product()
{
}

Product::Product(string name, int ID, Date Manufactory, Date Expiry)//Parameterized constructor defination
{
	this->name = name;
	this->ID = ID;
	this->Manufactory = Manufactory;
	this->Expiry = Expiry;
}


Product::~Product()
{
}

string Product::getName()//To get name function defination
{
	return name;
}

int Product::getID()//To get ID function defination
{
	return ID;
}

Date Product::getManufactory()//To get manufactory date function defination
{
	return Manufactory;
}

Date Product::getExpiry()//To get expiry date function defination
{
	return Expiry;
}

void Product::setName(string name)//To set name function defination
{
	this->name = name;
}

void Product::setID(int ID)//To set ID function defination
{
	this->ID = ID;
}

void Product::setManufactory(Date Manufactory)//To set manufactory date function defination
{
	this->Manufactory = Manufactory;
}

void Product::setExpiry(Date Expiry)//To set expiry date function defination
{
	this->Expiry = Expiry;
}

void Product::display()//Display function defination
{
	cout << "Item name : " << name << endl;
	cout << "Item ID : " << ID << endl;
	cout << "Item Manufactory ";
	Manufactory.display();
	cout << "Item Expiry ";
	Expiry.display();
}

void Product::operator+(int add)//+ operator overloading
{
	int manday = Manufactory.getDay();
	int manmonth = Manufactory.getMonth();
	int manyear = Manufactory.getYear();
	manday += add;
	if (manday > 31)
	{
		manmonth++;
		manday -= 31;
	}
	if (manmonth > 12)
	{
		manyear++;
		manmonth -= 12;
	}
	Manufactory.setDay(manday);
	Manufactory.setMonth(manmonth);
	Manufactory.setYear(manyear);
	Manufactory.check();
	int Expday = Expiry.getDay();
	int Expmonth = Expiry.getMonth();
	int Expyear = Expiry.getYear();
	Expday += add;
	if (Expday > 31)
	{
		Expmonth++;
		Expday -= 31;
	}
	if (Expmonth > 12)
	{
		Expyear++;
		Expmonth -= 12;
	}
	Expiry.setDay(Expday);
	Expiry.setMonth(Expmonth);
	Expiry.setYear(Expyear);
	Expiry.check();
}
