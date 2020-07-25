#include"Billing.h"
void main()
{
	string productname;
	int ID;
	int dd, mm, yyyy;
	cout << "Enter product name : ";
	cin >> productname;
	cout << "Enter ID : ";
	cin >> ID;
	cout << "Enter manufactory date : ";
	cin >> dd >> mm >> yyyy;
	Date manu(dd, mm, yyyy);
	manu.check();
	cout << "Enter expiry date : ";
	cin >> dd >> mm >> yyyy;
	Date exp(dd, mm, yyyy);
	exp.check();
	cout << "Enter quantity : ";
	int quan;
	cin >> quan;
	cout << "Enter price : ";
	float price;
	cin >> price;
	Billing bill(productname, ID, manu, exp, quan, price);
	bill.writetofile();
	bill.readfromfile();
	bill.display();
	system("pause");
}