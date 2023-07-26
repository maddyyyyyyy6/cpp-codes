#include <iostream>
using namespace std;

int main()
{
    int a[10] = {3, 2, 4, 52, 345, 234, 52, 34, 45, 12};
    int max = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "max is " << max;
}