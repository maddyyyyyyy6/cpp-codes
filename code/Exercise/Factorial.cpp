#include <iostream>
using namespace std;

int main()
{
    int n, last = 1, current = 2, result = 0;
    cout << "Factorial: ";
    cout << "Enter a positive integer: ";
    cin >> n;
    // 1 2 3

    for (int i = n - 1; i >= 1; i--)
    {

        n = n * i;
    }
    cout << n << endl;
    return 0;
}
