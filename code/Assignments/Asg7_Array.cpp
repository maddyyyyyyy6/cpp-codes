#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    // getting the sum of the array elements

    for (int j = 0; j < 10; j++)
    {
        sum = sum + a[j];
    }
    cout << "Sum of the array elements is " << sum;
    return 0;
}
