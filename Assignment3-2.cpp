#include <iostream>
using namespace std;

int main()
{
double num_male = 22;
double num_female = 28;
double num_students = num_male + num_female;

double Per_male = num_male / num_students;
double Per_female = num_female / num_students;

cout << "Percentage Male: " << Per_male << endl;
cout << "Percentage Female: " << Per_female << endl;

}