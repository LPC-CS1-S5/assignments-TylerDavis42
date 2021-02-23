#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  
const int Max_Value = 1000;
const int Min_Value = 0;

int Rnum1;
int Rnum2;
int Rnum3;

unsigned seed = time(0);
srand(seed);

Rnum1 = (rand() % Max_Value - Min_Value + 1) + Min_Value;
Rnum2 = (rand() % Max_Value - Min_Value + 1) + Min_Value;
Rnum3 = (rand() % Max_Value - Min_Value + 1) + Min_Value;

int SUM;
SUM = Rnum1 + Rnum2 + Rnum3;

int AVG;
AVG = SUM/3;

cout << Rnum1 << endl;
cout << Rnum2 << endl;
cout << Rnum3 << endl;
cout << "Sum: " << SUM << endl;
cout << setprecision(5) << "Average: " << AVG << endl;
  
  // Committed from Repl.it

}
