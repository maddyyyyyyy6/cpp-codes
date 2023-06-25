#include <iostream>
using namespace std;

int main()
{
    bool isPrime = true;
    int n;
    cout << "Enter a Positive Number: ";
    cin >> n;

    if (!n > 0)
    {

        cout << "Enter a valid number ";
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << i << " this is a prime number: ";
            isPrime = false;
            break;
        }
        else
        {
            // cout << i << " not a prime number:";
        }
        // cout << (n % i) << endl;
    }

    isPrime ? cout << n << " is a prime number: " << endl : cout << n << " Not a Prime Number: " << endl;
    return 0;
}