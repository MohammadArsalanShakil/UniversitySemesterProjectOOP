#include"Billing.h"
#include<fstream>
void bill();
void savetofile(Billing bill);
void readfromfile();
void main()
{
	cout << setw(15) << "Welcome to SuperMarket " << endl;
	bill();
	system("pause");
}

void bill()
{
	string name;
	int ID;
	int dd;
	int mm;
	int yyyy;
	int quantity;
	float price;
	char choice;
	do
	{
		cout << "Enter item name : ";
		cin >> name;
		cout << "Enter ID name : ";
		cin >> ID;
		cout << "Enter Manufactory Date (DD/MM/YYYY) : ";
		cin >> dd >> mm >> yyyy;
		Date man(dd, mm, yyyy);
		man.check();
		cout << "Enter Expiry Date (DD/MM/YYYY) : ";
		cin >> dd >> mm >> yyyy;
		Date exp(dd, mm, yyyy);
		exp.check();
		cout << "Enter Quantity of the Item : ";
		cin >> quantity;
		cout << "Enter Price : ";
		cin >> price;
		Product pro(name, ID, man, exp);
		Billing bill(pro, quantity, price);
		savetofile(bill);
		cout << "Want to add more items? (Y for yes || N for no) : ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
}

void savetofile(Billing bill)
{
	ofstream fin("Bill.txt", ios::app | ios::binary);
	fin.write(reinterpret_cast<char*>(&bill), sizeof(Billing));
	fin.close();
}

void readfromfile()
{
	Billing bill;
	ifstream fout("Bill.txt", ios::binary);
	fout.seekg(0, ios::end);
	int last = fout.tellg();
	int size = sizeof(Billing);
	int records = last / size;
	for (int i = 0; i < records; i++)
	{
		fout.read(reinterpret_cast<char*>(&bill), sizeof(Billing));
		bill.display();
	}
	fout.close();
}
