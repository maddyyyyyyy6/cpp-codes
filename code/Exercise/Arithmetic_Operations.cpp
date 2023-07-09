#include<iostream>
using namespace std;

int main()
{
  addition();
  cout << "Simple Calculator - maddyCoder";
  cout << "Select operator: \n";
  cout << "1. +\n";
  cout << "2. -\n";
  cout << "3. *\n";
  cout << "4. /\n";
  cout << "";
  
  
  return 0;
}

void addition()
{
  float a,b,c;
  cout << "Enter the value for first number: ";
  cin >> a;
  cout << "Enter the value for second number: ";
  cin >> b;

  c = a +b;
  cout << "Addition of "<< a << " and " << b<< " is " << c;
}

void substraction()
{
  float a,b,c;
  cout << "Enter the value for first number: ";
  cin >> a;
  cout << "Enter the value for second number: ";
  cin >> b;

  c = a  - b;
  cout << "Substraction of "<< a << " and " << b<< " is " << c;
}
void mulitiplication()
{
  float a , b , c;
  cout << "Enter the value for first number: ";
  cin >> a;
  cout << "Enter the value for second number: ";
  cin >> b;

  c = a  * b;
  cout << "Multiplication of "<< a << " and " << b<< " is " << c;
}

void division()
{
  float a , b , c;
  cout << "Enter the value for first number: ";
  cin >> a;
  cout << "Enter the value for second number: ";
  cin >> b;

  c = a / b;
  cout << "Division of "<< a << " and " << b<< " is " << c;
}

  
