#include <iostream>
using namespace std;
void main()
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i < 100; i++)
    {
        if (i == 1)
        {
            cout << t1 << " ";
            continue;
        }
        else if (i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        
    }
}