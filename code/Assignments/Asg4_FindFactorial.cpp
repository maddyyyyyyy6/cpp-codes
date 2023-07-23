#include <iostream>
using namespace std;

int main()
{
    int n = ;
    cout << "Enter the value to find its factorial: ";
    cin >> n;

    for (int i = n - 1; i >= 1; i--)
    {
        n = n * i;
    }
    cout << " Factorial is " << n;
    return 0;
}