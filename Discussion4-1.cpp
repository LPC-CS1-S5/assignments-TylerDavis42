#include <iostream>
using namespace std;

int main()
{

int i = 10;
int j = 20;


// Nested If
if (i > 0) {
  if (j > 0) {
    cout << " statement 1" << endl;
  }
  else {
    cout << " statement 3" << endl;
  }
else
  if (j > 0) {
    cout << "statement 2" << endl;
  }
}


// Else/If 
if(i > 0 && j > 0)
{
  cout << "statement 1\n";
}
else if(i <= 0 && j > 0)
{
  cout << "statement 2\n";
}
else
{
  cout << "statement 3\n";
}

return 0;
}