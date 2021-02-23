#include <iostream>
using namespace std;

int main()
{
  float score1;
  float score2;
  float score3;

  cout << "Enter 3 Scores\n";
  cin >> score1 >> score2 >> score3;

  float average = (score1 + score2 + score3)/3;

  cout << "Your Scores " << score1 << " " << score2 << " " << score3 << " " << endl;

  cout << "Average " << average << endl;
} 