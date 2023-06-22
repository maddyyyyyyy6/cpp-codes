#include <iostream>
using namespace std;

int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    

    for (int i = 1; i < 20; i++)
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

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    return 0;
}