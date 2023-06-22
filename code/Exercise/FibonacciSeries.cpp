#include <iostream>
using namespace std;

int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    // take a limit value
    int till;
    cout << "Enter till value : ";
    cin >> till;

    // add while for a limit of fibo
    // cout << "Fibonacci Series: " << t1 << " " << t2 << " ";
    while (nextTerm <= till)
    {

        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    // for (int i = 1; i < 20; i++)
    // {
    //     if (i == 1)
    //     {
    //         cout << t1 << " ";
    //         continue;
    //     }
    //     else if (i == 2)
    //     {
    //         cout << t2 << " ";
    //         continue;
    //     }

    //     nextTerm = t1 + t2;
    //     t1 = t2;
    //     t2 = nextTerm;
    //     cout << nextTerm << " ";
    // }
    return 0;
}