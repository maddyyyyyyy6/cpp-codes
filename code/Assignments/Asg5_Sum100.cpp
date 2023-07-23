#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of the first 100 natural numbers is: " << sum;
    return 0;
}