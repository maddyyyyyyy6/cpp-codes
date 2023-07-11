#include <iostream>
using namespace std;

int main()
{
    // bubble sort - sorting the elements of a array in a ascending order
    int a[10] = {4, 3, 2, 1, 45, 33, 12, 34, 11, 4};
    // int a[5] = {4, 1, 2, 3, 5};

    int current = 0, next = 1, tmp;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i];
        if (a[current] > a[next])
        {
            cout << "  Bigger ";
            tmp = a[next];
            a[next] = a[current];
            a[current] = tmp;
        }
        current = i;
        next = i + 1;
        cout << endl;
    }
    cout << "After sorting: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}