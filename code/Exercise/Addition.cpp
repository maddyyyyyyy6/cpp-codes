#include<iostream>
using namespace std;

int main()
{
  addition();
  
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

  
