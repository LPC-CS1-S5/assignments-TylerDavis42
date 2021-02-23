#include <iostream>
using namespace std;

int main ()
{
// List of Choices w/"choice" Being the Input
int choice1 = 1;
int choice2 = 2;
int choice3 = 3;
int choice4 = 4;
int choice;

// Radius for Area of Circle
double r;
double pi;
pi = 3.14159;
int r2;


// Length/Width for Area of Rectangle
int l;
int w;

// Base/Height for Area of Triangle
int b;
int h;

// Selection Menu
  cout << "1. Calculate the Area of a Circle" << endl;
  cout << "2. Calculate the Area of a Rectangle" << endl;
  cout << "3. Calculate the Area of a Triangle" << endl;
  cout << "4. Quit"  << endl;
  cout << "Enter Your Choice (1-4): " << endl;
    cin >> choice; 
  
  if (choice == 1){
    cout << "Enter Circle Radius: " << endl;
      cin >> r;
r2 = r * r;
double AOC;
AOC = 3.14159 * r2;

      cout << "Area of the Circle is: " << AOC << endl;
  }

  if (choice == 2){
    cout << "Enter the Length & Width: " << endl;
      cin >> l >> w;

int AOR;
AOR = l * w;

      cout << "Area of the Rectangle is: " << AOR << endl;
  }
  
  if (choice == 3){
    cout << "Enter the Base & Height: " << endl;  
      cin >> b; 
      cin >> h;

int AOT;
AOT = .5 * b * h;

      cout << "Area of the Triangle is: " << AOT << endl;
  }

  if (choice == 4){
    cout << "END OF PROGRAM" << endl;
  }
}