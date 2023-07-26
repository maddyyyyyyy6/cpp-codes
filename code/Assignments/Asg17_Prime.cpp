#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    bool isPrime = false;
    for (int i = 2; i < n; i++)
    {
        if (i % n != 0)
        {
            isPrime = true;
        }else{
            isPrime = false;
        }
    }

    cout << "is Prime " << isPrime << endl;
    return 0;
}