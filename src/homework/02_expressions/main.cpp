//write include statements
#include "hwexpressions.h"
#include<iostream>

//write namespace using statement for cout
using std::cout; using std::cin;

double meal_amount;
double tip_rate;
double tip_amount;
double tax_amount;
double total;

int main()
{
	cout<<"How much was your meal tonight? ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"What percentage would you like to tip? ";
	cin>>tip_rate;

	tip_rate = tip_rate *.01; //turning the input into a percentage

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	
	total = tip_amount + tax_amount + meal_amount;
	
	return total;

	cout<<"Your total is "<<total;

	return 0;
}
