// Make a program that generates 3 random numbers.
// Whenever you run the program, it generates completely different numbers.
// The generated numbers must be between 0 and 99
// Assign the values to variables num1, num2, num3.
// Get the summation and average of all values.
// print out the summation result and all generated values.
// output format: two precision after the decimal point.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>  
using namespace std;

int main()
{

const int Max_Value = 99;
const int Min_Value = 0;

int num1;
int num2;
int num3;

unsigned seed = time(0);
srand(seed);

num1 = (rand() % Max_Value - Min_Value + 1) + Min_Value;
num2 = (rand() % Max_Value - Min_Value + 1) + Min_Value;
num3 = (rand() % Max_Value - Min_Value + 1) + Min_Value;

int totalsum;
totalsum = num1 + num2 + num3;

int average;
average = totalsum / 3;

cout << num1 << endl;
cout << num2 << endl;
cout << num3 << endl;
cout << "Sum: " << totalsum << endl;
cout << setprecision(2) << "Average: " << average << endl;

}