#include <iostream>
using namespace std;

int main()
{
    // to print fibonacci series
    int current = 5, previous, preprevious;

    for (int i = 1; i < 20; i++)
    {
        if (i >= 1)
        {

            preprevious = current - 2;
            previous = current - 1;
            current = previous + preprevious;
            cout << current << " ";
        }
        else
        {
            cout << "0 ";
        }

        // cout << i - 1 << " " << i - 2 << " " << i << endl;
    }
    return 0;
}