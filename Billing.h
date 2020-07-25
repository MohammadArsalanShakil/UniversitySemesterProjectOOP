#pragma once
#include "Product.h"
class Billing : public Product
{
	int quantity;//Integer type
	float price;//FLoat type
	float total;//Float type
public:
	Billing();//Default constructor
	Billing(string name, int ID, Date manufactory, Date Expiry, int quantity, float price);//Parameterized constructor
	~Billing();//Deconstructor
	void display();//Display function
	void writetofile();//Function to write to file
	void readfromfile();//Function to read from file
	static int count();//Function to count number of objects in file;
};

