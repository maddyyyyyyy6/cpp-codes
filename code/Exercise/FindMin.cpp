#include <iostream>
using namespace std;
int main()
{

    int a[10] = {45, 23, 45, 2, 56, 67, 78, 23, 45, 67};
    int min = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }

    cout << min;
    return 0;
}