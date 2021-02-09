//There are three seating categories at a stadium. For a softball game,
// Class A seats cost $15,
// Class B seats cost $12, and
// Class C seats cost $9.
// Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales.
// Format your dollar amount in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int ClassA;
int ClassB;
int ClassC;

cout <<"Tickets From Class A: "<< endl;
cin >> ClassA;
cout <<"Tickets From Class B: "<< endl;
cin >> ClassB;
cout <<"Tickets From Class C: "<< endl;
cin >> ClassC;

double Income1 = ClassA * 15.00;
double Income2 = ClassB * 12.00;
double Income3 = ClassC * 9.00;
double TotalIncome = Income1 + Income2 + Income3;

cout << TotalIncome << endl;
cout << setprecision(4) << "Total Income:$" << TotalIncome << endl;

// Not sure how to make this program work if dollar amounts are in fixed-point notation.
}