// Check the lecture slides for more details

// Write a program that  stores the following values in five different variables:

// 28, 32, 37, 24, and 33.

// The program should first calculate the sum of these five variables and store the result in a separate variable named sum .
// Then, the program should divide the sum variable by 5 to get the average.
// Display the sum and average with precision 3 on the screen.

#include <iostream>
using namespace std;

int main()
{
  double V1 = 28;
  double V2 = 32;
  double V3 = 37;
  double V4 = 24;
  double V5 = 33;

  double sum = V1 + V2 + V3 + V4+ V5;
  double avg = sum/5;

  cout << "Sum:" << sum << endl;
  cout << "Average:" << avg << endl;
}