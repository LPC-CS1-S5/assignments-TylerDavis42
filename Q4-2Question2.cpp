#include <iostream>
using namespace std;

int main()
{

int PW;
int ShipDist;
float ShipRate;
float ShipCharge;

// Printout of Package Weight/Distance/Cost Menu
cout << "Enter Package Weight: " << endl;
  cin >> PW;

cout << "Enter Shipping Distance: " << endl;
  cin >> ShipDist;
ShipDist != 10; 
ShipDist != 3000; 

// Error Messgae for Invalid Shipping Distance
if (ShipDist < 10 || ShipDist > 3000){
  cout << "Error" << endl;
}

// Error Message for Invalid Package Weight
if (PW <= 0 || PW > 20){
  cout << "Error" << endl;

// 2kg or Less
if (PW <= 2){
ShipRate = 1.1;
}

// Over 2kg But Not More Than 6kg
if (PW > 2 && PW <= 6) {
ShipRate = 2.2;

}
//Over 6kg But Not More Than 10kg
if (PW > 6 && PW <= 10) {
ShipRate = 3.7;

}
//Over 10kg But Not More Than 20kg
if (PW > 10 && PW <= 20) {
ShipRate = 4.8;

}
// Printout for Shippinh Rate/Cost
ShipCharge = ( ShipDist / 500.00 ) * ShipRate;
cout << "Shipping Charge Total: " << ShipCharge << endl;

}

}