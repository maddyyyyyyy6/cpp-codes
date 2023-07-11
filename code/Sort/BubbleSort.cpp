#include <iostream>
using namespace std;

int main()
{
    // bubble sort algorithms
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int temp;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << a[i] << " is greater than " << a[i + 1] << endl;
            temp = a[i + 1];
            a[i + 1] = a[i];
            a[i] = temp;
        }
        else
        {
            cout << a[i] << " is smaller than " << a[i + 1] << endl;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}