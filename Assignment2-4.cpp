#include <iostream>
using namespace std;
int main()
{
  double regular_price = 59.95;
  double discount_amount = regular_price * .02;
  double sales_price = regular_price - discount_amount;

  cout << "Regular Price: $" << regular_price << endl;
  cout << "Discount Amount: $" << discount_amount << endl;
  cout << "Sale Price: $" << sales_price << endl;
}