#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        cout << "checking for i: " << i << " with " << n << " remainder is: " << n % i << endl;
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    cout << "is Prime ";
    isPrime ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}