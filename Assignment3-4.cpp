#include <iostream>
using namespace std;

int main()
{
// double Month1;
// double Month2;
// double Month3;
string Month1;
string Month2;
string Month3;

double rainamount1;
double rainamount2;
double rainamount3;

cout << "1st Month & Rain Amount" << endl;
cin >> Month1 >> rainamount1;

cout << "2nd Month & Rain Amount" << endl;
cin >> Month2 >> rainamount2;

cout << "3rd Month & Rain Amount" << endl;
cin >> Month3 >> rainamount3;

double average = (rainamount1 + rainamount2 + rainamount3) / 3;

// cout << "The average rainfall for June, July, and August is " << average << " inches" << endl;
cout << "The average rainfall for " << Month1 << " " << Month2 << "  " << Month3 << " is " << average << endl;

}