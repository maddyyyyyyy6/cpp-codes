#include <iostream>
using namespace std;

int main()
{
    bool isPrime = false;
    int n;
    cout << "Enter a Positive Number: ";
    cin >> n;

    if (!n > 0)
    {

        cout << "Enter a valid number ";
    }
    for (int i = 2; i < n; i++)
    {
        if(i==n) {
            
        }
        if (i % n == 1)
        {
            isPrime = true;
            break;
        }
    }

    isPrime ? cout << "It is a prime number:" : cout << "Not a Prime Number: ";
    return 0;
}