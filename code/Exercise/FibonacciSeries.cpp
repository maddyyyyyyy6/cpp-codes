#include <iostream>
using namespace std;

void getFibonacciSeries(int n);
int main()
{
    // to print fibonacci series
    getFibonacciSeries(20);
    return 0;
}

void getFibonacciSeries(int n)
{
    // take n as limit
    int t1 = 0, t2 = 1, next = 0;

    for (int i = 1; i < n; i++)
    {

        if (i == 1)
        {
            cout << t1 << " , ";
            continue;
        }
        else if (i == 2)
        {
            cout << t2 << " , ";
            continue;
        }
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        cout << next << " , ";
    }

    // 0 0 1 2 3 5 8 13 21 ....
}