
/* This is a simple program that calculates the amount of moneycount
that is in a cashiers drawer.*/

#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
void switch_func();
void moneycount();
int main()
{
		cout << endl;
		cout << " + ---------------------------------- +	" << endl;
		cout << " |           Cash Counter             |	" << endl;
		cout << " |              5/19/18               |	" << endl;
		cout << " |         Peyton Broussard           |	" << endl;
		cout << " |                                    |	" << endl;
		cout << " + ---------------------------------- +	" << endl;
		cout << endl;
	switch_func();//function that calls the switch statement.
	
return 0;	
}

//this function will call the menu
void switch_func()
{
	int choice;
	
	cout << "1)Count Nightly Drawer." << endl;
	cout << "2) Exit." << endl;
	
	
	cout << "Please enter a selection you would like to perform. ";
	cin >> choice;
	

	switch(choice)
	{
		case 1:
			moneycount();
			break;
			
		case 2:
			cout << "The program will now exit.." << endl;
			exit(0);
			break;
			
		default:
			cout << "Incorrect choice entered, please try again. " << endl;
			switch_func();
			break;
			
	}

}

void moneycount()
{
	int penny  = 0;
	int nickel = 0;
	int dime = 0;
	int quarter = 0;
	int halfdollar = 0;
	int dollar = 0;
	int two_dollar = 0;
	int five_dollar = 0;
	int ten_dollar = 0;
	int twenty_dollar = 0;
	int fifty_dollar = 0;
	int onehundred_dollar = 0;
	int pennyroll = 0;
	int nickelroll = 0;
	int dimeroll = 0;
	int quarterroll = 0;
	
			double price1 = 0;
			double price2 = 0;
			double price3 = 0;
			double price4 = 0;
			double price5 = 0;
			double price6 = 0;
			double price7 = 0;
			double price8 = 0;
			double price9 = 0;
			double price10 = 0;
			double price11 = 0;
			double price12 = 0;
			double price13 = 0;
			double price14 = 0;
			double price15 = 0;
			double price16 = 0;
			double finalprice = 0;

			
	cout << "_________________________________________________"<< endl;			
	cout << "Please enter the number of Pennies ($.01)";
	cin >> penny;
	if(penny >= 0)
	{
		double pennyprice = .01;

		price1 = (pennyprice) * (penny);


	}
	cout << "Please enter the number of Nickles ($.05)";
	cin >> nickel;
	if(nickel >= 0)
	{
		double nickelprice = .05;

		price2 = (nickelprice) * (nickel);

	}
	cout << "Please enter the number of Dimes ($.10)";
	cin >> dime;
	if(dime >= 0)
	{
		double dimeprice = .10;

		price3 = (dimeprice) * (dime);
		
	}
	cout << "Please enter the number of Quarters ($.25)";
	cin >> quarter;
	if(quarter >= 0)
	{
		double quarterprice = .25;

		price4 = (quarterprice) * (quarter);
		
	}
	cout << "Please enter the number of Half Dollars ($.50)";
	cin >> halfdollar;
	if(halfdollar >= 0)
	{
		double halfdollarprice = .50;

		price5 = (halfdollarprice) * (halfdollar);
		
	}
	cout << "Please enter the number of Dollars ($1)";
	cin >> dollar;
	if(dollar >= 0)
	{
		double dollar_price = 1;

		price6 = (dollar_price) * (dollar);
		
	}
	cout << "Please enter the number of Two Dollar ($2)";
	cin >> two_dollar;
	if(two_dollar >= 0)
	{
		double two_dollar_price = 2;

		price7 = (two_dollar_price) * (two_dollar);
		
	}
	cout << "Please enter the number of Five Dollar ($5)";
	cin >> five_dollar;
	if(five_dollar >= 0)
	{
		double five_dollar_price = 5;

		price8 = (five_dollar_price) * (five_dollar);
		
	}
	cout << "Please enter the number of Ten Dollar ($10)";
	cin >> ten_dollar;
	if(ten_dollar >= 0)
	{
		double ten_dollar_price = 10;
		price9 = (ten_dollar_price) * (ten_dollar);
		
	}
	cout << "Please enter the number of Twenty Dollar ($20)";
	cin >> twenty_dollar;
	if(twenty_dollar >= 0)
	{
		double twenty_dollar_price = 20;

		price10 = (twenty_dollar_price) * (twenty_dollar);
		
	}
	cout << "Please enter the number of Fifty Dollar ($50)";
	cin >> fifty_dollar;
	 if(fifty_dollar >= 0)
	{
		double fifty_dollar_price = 50;

		price11 = (fifty_dollar_price) * (fifty_dollar);
		
	}
	cout << "Please enter the number of OneHundred Dollar ($100)";
	cin >> onehundred_dollar;
	 if(onehundred_dollar >= 0)
	{
		double onehundred_dollar_price = 100;

		price12 = (onehundred_dollar_price) * (onehundred_dollar);
		
	}
	cout << "Please enter the number of Penny rolls ($.5)";
	cin >> pennyroll;
	if(pennyroll >= 0)
	{
		double pennyroll_price = .5;

		price13 = (pennyroll_price) * (pennyroll);
		
	}
	cout << "Please enter the number of Nickel rolls ($2)";
	cin >> nickelroll;
	if(nickelroll >= 0)
	{
		double nickelroll_price = 2;

		price14 = (nickelroll_price) * (nickelroll);
		
	}
	cout << "Please enter the number of Dime rolls ($5)";
	cin >> dimeroll;
	if(dimeroll >= 0)
	{
		double dimeroll_price = 5;

		price15 = (dimeroll_price) * (dimeroll);
		
	}
	cout << "Please enter the number of Quarter rolls ($10)";
	cin >> quarterroll;
	if(quarterroll >= 0)
	{
		double quarterroll_price = 10;
		
		price16 = (quarterroll_price) * (quarterroll);

		
	}
	else
	{
		cout << "Something invalid was entered, please try again..." << endl;
		moneycount();
		
		
	}
	
	for (int i = 0; i < 1; i++)
	{
		finalprice = (price1 + price2 + price3 + price4 + price5 + price6 + price7 + price8 + price9 + price10 + price11 + price12 + price13 + price14 + price15 + price16);
	}
	cout << endl;
	cout << "_________________________________________________"<< endl;
	cout << "Balance from drawer is: " << finalprice << endl;
	
	
}