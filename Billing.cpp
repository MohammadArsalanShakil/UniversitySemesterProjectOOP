#include "Billing.h"
float total = 0;


Billing::Billing()
{
}

Billing::Billing(string name, int ID, Date manufactory, Date Expiry, int quantity, float price):Product(name, ID, manufactory, Expiry)//Parameterized constructor defination
{
	this->quantity = quantity;
	this->price = price;
}


Billing::~Billing()
{
}

void Billing::display()//Display Function
{
	Product::display();//Display function call from class product
	cout << "Quantity : " << quantity << endl;
	cout << "Total : " << total << endl;
}

void Billing::writetofile()
{
	total += (quantity*price);
	Billing Bill(name, ID, Manufactory, Expiry, quantity, price);
	ofstream fout("Bill.txt", ios::binary | ios::app);//Ofstream object
	fout.write(reinterpret_cast<char*>(&Bill), sizeof(Billing));//Writing to file
	fout.close();//To close file
}

void Billing::readfromfile()
{
	ifstream fin("Bill.txt", ios::app | ios::binary);//Ifstream object
	Billing read;//Biiling object
	int loop = Billing::count();//To count object
	for (int i = 0; i < loop; i++)
	{
		fin.read(reinterpret_cast<char*>(&read), sizeof(Billing));//Reading to file
		read.display();//Display function (NOT WORKING)
	}
	fin.close();
}

int Billing::count()//COunt function
{
	ifstream file("Bill.txt", ios::app | ios::binary);//Ifstream object
	file.seekg(0, ios::end);//Seekg function
	int countpos = file.tellg() / sizeof(Billing);//To count number of objects
	return countpos;//To return count
}
