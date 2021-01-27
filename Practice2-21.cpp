#include <iostream>
using namespace std;
int main()
{
  double work_hours = 50;
  double  regular_wages, overtime_wages;
  double base_pay_rate = 18.25, over_pay_rate = 27.78;
  double regular_hours = 40, overtime_hours;
  double total_wages;

  regular_wages = regular_hours * base_pay_rate;
 
  overtime_hours = work_hours - regular_hours

  overtime_wages = overtime_hours * overtime_pay_rate;

  total_wages = regular_wages + overtime_wages;

  cout << "Regular Wages" << regular_wages << endl;
  cout << "Overtime Wages" << overtime_wages << endl;
  cout << "Total Wages" << total_wages << endl.
}