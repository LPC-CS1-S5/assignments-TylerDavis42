// Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
// The tax should be 6.75 percent of the meal cost.
// The tip should be 20 percent of the total after adding the tax.

// Display the meal cost, tax amount, tip amount, and total bill on the screen(All amount should be displayed with 2 precision numbers and decimal point.)
// Describe your programming logic as the comments.

#include <iostream>
using namespace std;

int main()
{ 
double meal_cost = 88.67;
double tax_percent = .0675;
double tip_amount = .20;
double total_bill;

double meal_tax = meal_cost * tax_percent;
double meal_tip = meal_cost * tip_amount;
double total = meal_cost + meal_tax + meal_tip;

cout << "Meal cost: $" << meal_cost << endl;
cout << "Tax Amount: $" << meal_tax << endl;
cout << "Tip Amount: $" << meal_tip << endl;
cout << "Total Bill: $" << total << endl;


}