#include <iostream>
using namespace std;

int main()
{
    // bubble sort - sorting the elements of a array in a ascending order
    int a[10] = {412, 334, 212, 123, 4512, 3233, 142, 324, 111, 52};
    // int a[5] = {4, 1, 2, 3, 5};

    int current = 0, next = 1, tmp, i = 0, e = 0;
    while (true)
    {
        cout << "Bubble Sort - round " << e;
        // cout << a[i];
        // cout << " current -> " << current << endl;
        // cout << " next -> " << next << endl;
        if (a[current] > a[next])
        {
            tmp = a[next];
            a[next] = a[current];
            a[current] = tmp;
        }
        current = i + 1;
        next = i + 2;
        cout << endl;
        if (current == 9)
        {
            cout << "After sorting: " << endl;

            for (int i = 0; i < 10; i++)
            {
                cout << a[i] << endl;
            }
            i = 0;
            current = 0;
            next = 1;
            cout << "New loop!" << endl;
        }
        if (e == 100)
        {
            break;
        }
        if (current)
            i++;
        e++;
    }
    cout << "After sorting: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}