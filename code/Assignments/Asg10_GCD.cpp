#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, n, gcd;
    cout << "Enter two value for GCDs: ";
    cin >> a >> b;
    n = (a < b) ? a : b;

    for (int i = 2; i <= n; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            // cout << "This is the GCD of both " << i << endl;
        }
        else
        {
        }
    }
    cout << "GCD : " << gcd << endl;
    return 0;
}