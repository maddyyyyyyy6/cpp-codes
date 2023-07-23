#include <iostream>
using namespace std;
void fact(int n);

int main()
{
    int t;
    cout << "Enter the value to find its factorial: ";
    cin >> t;
    fact(t);
    return 0;
}

void fact(int n)
{
    int nn = n;
    for (int i = nn - 1; i >= nn; i++)
    {
        nn = nn * i;
    }
    cout << "The Factorial of " << n << " is " << nn;
}
